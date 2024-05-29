#pragma once
#include "BankAccount.h"
#include <iostream>

class CheckingAccount : public BankAccount
{
public:
    CheckingAccount(double initialBalance) : BankAccount(initialBalance) {}

    void withdraw(double amount) override
    {
        if (balance >= amount)
        {
            std::cout << "Withdrawing $" << amount << " from checking account." << std::endl;
            balance -= amount;
        }
    }
};
