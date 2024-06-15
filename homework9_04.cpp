#include <iostream>
#include <map>
#include <string>

// 基类 Account
class Account {
protected:
    double balance;

public:
    Account(double balance) : balance(balance) {}
    virtual bool withdraw(double amount) = 0; // 纯虚函数，用于多态
    double getBalance() const { return balance; }
};

// Savings 类
class Savings : public Account {
public:
    Savings(double balance) : Account(balance) {}
    bool withdraw(double amount) override {
        if (amount <= balance + 500) { // Savings 账户透支范围为500
            balance -= amount;
            return true;
        }
        return false;
    }
};

// Checking 类
class Checking : public Account {
public:
    Checking(double balance) : Account(balance) {}
    bool withdraw(double amount) override {
        if (amount <= balance) { // Checking 账户透支范围为0
            balance -= amount;
            return true;
        }
        return false;
    }
};

 int main() {
    double N;
    std::cin >> N;

    std::map<std::string, Account*> accounts;
    char type;
    std::string number;
    double amount;

    // 初始化账户
    accounts["S"] = new Savings(1000);
    accounts["C"] = new Checking(1000);

    for (int i = 0; i < N; ++i) {
        std::cin >> type >> number >> amount;
        bool success = accounts[std::string(1, type)]->withdraw(amount);
        std::cout << number << " " << (success ? amount : 0) << std::endl;
    }

    // 清理动态分配的内存
    delete accounts["S"];
    delete accounts["C"];

    return 0;
}

