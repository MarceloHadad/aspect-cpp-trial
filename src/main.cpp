#include "pch.h"

int main()
{
    CheckingAccount checkingAccount(1000.0);
    SavingsAccount savingsAccount(3000.0);
    InvestmentAccount investmentAccount(5000.0);

    checkingAccount.withdraw(800.0);
    savingsAccount.withdraw(1300.0);
    investmentAccount.withdraw(2100.0);

    checkingAccount.withdraw(3400.0);
    savingsAccount.withdraw(5500.0);
    investmentAccount.withdraw(8900.0);

    return 0;
}
