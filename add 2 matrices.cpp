#include <iostream>
const int ROWS = 3;
const int COLS = 3;
void addMatrices(int mat1[][COLS], int mat2[][COLS], int result[][COLS]) {
    for (int i = 0; i < ROWS; ++i) {
        for (int j = 0; j < COLS; ++j) {
            result[i][j] = mat1[i][j] + mat2[i][j];
        }
    }
}
void printMatrix(int mat[][COLS]) {
    for (int i = 0; i < ROWS; ++i) {
        for (int j = 0; j < COLS; ++j) {
            std::cout << mat[i][j] << " ";
        }
        std::cout << std::endl;
    }
}
int main() {
    int mat1[ROWS][COLS] = {{1, 2, 3},
                            {4, 5, 6},
                            {7, 8, 9}};
    int mat2[ROWS][COLS] = {{9, 8, 7},
                            {6, 5, 4},
                            {3, 2, 1}};
    int result[ROWS][COLS];
    addMatrices(mat1, mat2, result);
    std::cout << "Matrix 1:" << std::endl;
    printMatrix(mat1);
    std::cout << std::endl;
    std::cout << "Matrix 2:" << std::endl;
    printMatrix(mat2);
    std::cout << std::endl;
    std::cout << "Resultant Matrix:" << std::endl;
    printMatrix(result);
    return 0;
}