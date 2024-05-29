#pragma once
#include "BankAccount.h"
#include <iostream>

class SavingsAccount : public BankAccount
{
public:
    SavingsAccount(double initialBalance) : BankAccount(initialBalance) {}

    void withdraw(double amount) override
    {
        if (balance >= amount)
        {
            std::cout << "Withdrawing $" << amount << " from savings account." << std::endl;
            balance -= amount;
        }
    }
};
