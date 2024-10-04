#include <iostream>
#include <memory>
#include <vector>
#include <string>
#include <stdexcept>

// Base Account class
class Account {
protected:
    double balance;
public:
    Account(double initial_balance) : balance(initial_balance) {
        if (initial_balance < 0) {
            throw std::invalid_argument("Initial balance cannot be negative");
        }
    }

    virtual void deposit(double amount) {
        if (amount > 0) {
            balance += amount;
        }
    }

    virtual void withdraw(double amount) {
        if (amount > balance) {
            throw std::invalid_argument("Insufficient funds");
        }
        balance -= amount;
    }

    virtual double getBalance() const {
        return balance;
    }

    virtual ~Account() {}
};

// SavingsAccount with interest rate
class SavingsAccount : public Account {
private:
    double interest_rate;
public:
    SavingsAccount(double initial_balance, double interest_rate) 
        : Account(initial_balance), interest_rate(interest_rate) {}

    void applyInterest() {
        balance += balance * (interest_rate / 100);
    }
};

// CheckingAccount with overdraft protection
class CheckingAccount : public Account {
private:
    double overdraft_limit;
public:
    CheckingAccount(double initial_balance, double overdraft_limit) 
        : Account(initial_balance), overdraft_limit(overdraft_limit) {}

    void withdraw(double amount) override {
        if (amount > balance + overdraft_limit) {
            throw std::invalid_argument("Overdraft limit exceeded");
        }
        balance -= amount;
    }
};

// Template for showing account details
template <typename T>
void showAccountDetails(const T& account) {
    std::cout << "Account balance: " << account.getBalance() << std::endl;
}

int main() {
    try {
        std::vector<std::shared_ptr<Account>> accounts;
        
        // Create a Savings account with balance 1000 and 5% interest
        auto savings = std::make_shared<SavingsAccount>(1000.0, 5.0);
        savings->deposit(500); // Deposit 500
        savings->applyInterest(); // Apply interest
        accounts.push_back(savings);
        
        // Create a Checking account with balance 500 and overdraft limit 200
        auto checking = std::make_shared<CheckingAccount>(500.0, 200.0);
        checking->withdraw(600); // Withdraw 600
        accounts.push_back(checking);
        
        // Display account details
        for (const auto& acc : accounts) {
            showAccountDetails(*acc);
        }
    }
    catch (const std::exception& e) {
        std::cerr << "Error: " << e.what() << std::endl;
    }

    return 0;
}
