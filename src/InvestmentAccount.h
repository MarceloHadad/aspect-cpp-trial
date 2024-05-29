#pragma once
#include "BankAccount.h"
#include <iostream>

class InvestmentAccount : public BankAccount
{
public:
    InvestmentAccount(double initialBalance) : BankAccount(initialBalance) {}

    void withdraw(double amount) override
    {
        if (balance >= amount)
        {
            std::cout << "Withdrawing $" << amount << " from investment account." << std::endl;
            balance -= amount;
        }
    }
};
