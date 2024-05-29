#pragma once

class BankAccount
{
protected:
    double balance;

public:
    BankAccount(double initialBalance) : balance(initialBalance) {}

    virtual void withdraw(double amount) = 0;
    double getBalance() const { return balance; }
};
