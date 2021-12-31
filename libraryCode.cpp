#include "libraryCode.h"
#include <stdexcept>

Account::Account(): balance{0}
{
}

void Account::deposit(double sum)
{
    balance += sum;
}

void Account::withdraw(double sum)
{
    if(balance < sum)
    {
        throw std::runtime_error("Insufficient funds");
    }
    balance -= sum;
}

double Account::getBalance() const
{
    return balance;
}

void Account::transfer(Account& to, double sum)
{
    withdraw(sum); //throws exception if sum < balance.
    to.deposit(sum);
}