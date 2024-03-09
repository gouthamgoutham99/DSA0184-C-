#include <iostream>
#include <string>
#include <vector>

class Product {
private:
    std::string name;
    int quantity;
    double price;

public:
    Product(const std::string& n, int q, double p) : name(n), quantity(q), price(p) {}

    const std::string& getName() const {
        return name;
    }

    int getQuantity() const {
        return quantity;
    }

    double getPrice() const {
        return price;
    }

    void setQuantity(int q) {
        quantity = q;
    }

    void display() const {
        std::cout << "Name: " << name << ", Quantity: " << quantity << ", Price: $" << price << std::endl;
    }
};

class Inventory {
private:
    std::vector<Product> products;

public:
    void addProduct(const Product& p) {
        products.push_back(p);
    }

    void displayInventory() const {
        std::cout << "Inventory:\n";
        for (const auto& product : products) {
            product.display();
        }
    }

    Product* findProduct(const std::string& name) {
        for (auto& product : products) {
            if (product.getName() == name) {
                return &product;
            }
        }
        return nullptr;
    }

    void processOrder(const std::string& name, int quantity) {
        Product* product = findProduct(name);
        if (product) {
            if (product->getQuantity() >= quantity) {
                std::cout << "Order processed: " << quantity << " units of " << name << std::endl;
                product->setQuantity(product->getQuantity() - quantity);
            } else {
                std::cout << "Insufficient stock for " << name << std::endl;
            }
        } else {
            std::cout << "Product " << name << " not found" << std::endl;
        }
    }
};

int main() {
    Inventory inventory;

    // Adding some initial products
    inventory.addProduct(Product("Product1", 10, 20.0));
    inventory.addProduct(Product("Product2", 15, 30.0));

    // Display initial inventory
    inventory.displayInventory();

    // Process orders
    inventory.processOrder("Product1", 5);
    inventory.processOrder("Product2", 20);

    // Display updated inventory
    inventory.displayInventory();

    return 0;
}
