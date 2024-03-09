#include <iostream>

class BankAccount {
private:
    std::string accountNumber;
    double balance;

public:
    // Constructor
    BankAccount(std::string accNumber, double initialBalance) : accountNumber(accNumber), balance(initialBalance) {
        std::cout << "Account created with account number: " << accountNumber << std::endl;
    }
    ~BankAccount() {
        std::cout << "Account with account number: " << accountNumber << " is destroyed." << std::endl;
    }
    void deposit(double amount) {
        balance += amount;
    }
    void withdraw(double amount) {
        if (balance >= amount) {
            balance -= amount;
        } else {
            std::cout << "Insufficient funds!" << std::endl;
        }
    }
    void displayBalance() {
        std::cout << "Current balance for account number " << accountNumber << ": " << balance << std::endl;
    }
};
int main() { 
    BankAccount myAccount("123456789", 1000.0);
    myAccount.deposit(500.0);
    myAccount.withdraw(200.0);
    myAccount.displayBalance();
    return 0;
}