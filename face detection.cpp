#include <opencv2/core.hpp>
#include <opencv2/imgproc.hpp>
#include <opencv2/highgui.hpp>
#include <opencv2/objdetect.hpp>


using namespace cv;

int main() {
    // Load the pre-trained face detection classifier
    CascadeClassifier faceCascade;
    faceCascade.load("haarcascade_frontalface_default.xml");

    // Open the webcam
    VideoCapture cap(0);

    if (!cap.isOpened()) {
        std::cerr << "Error: Cannot open webcam." << std::endl;
        return -1;
    }

    while (true) {
        Mat frame;
        cap >> frame; // Capture frame from webcam

        // Convert frame to grayscale (required for face detection)
        Mat gray;
        cvtColor(frame, gray, COLOR_BGR2GRAY);

        // Detect faces in the frame
        std::vector<Rect> faces;
        faceCascade.detectMultiScale(gray, faces, 1.1, 4, CASCADE_SCALE_IMAGE, Size(30, 30));

        // Draw rectangles around detected faces
        for (const Rect& face : faces) {
            rectangle(frame, face, Scalar(0, 255, 0), 2);
        }

        // Display the frame with detected faces
        imshow("Face Detection", frame);

        // Check for 'Esc' key press to exit
        if (waitKey(1) == 27) {
            break;
        }
    }

    // Release resources
    cap.release();
    destroyAllWindows();

    return 0;
}
