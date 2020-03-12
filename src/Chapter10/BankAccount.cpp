#include "./BankAccount.h"
#include <iostream>
namespace Bank
{
    BankAccount::BankAccount(std::string name, std::string accountNumber, double money)
    {
        mName = name;
        mAccountNumber = accountNumber;
        mMoney = money;
    }

    BankAccount::~BankAccount()
    {
        std::cout << "The Account is closed." <<std::endl;
    }

    void BankAccount::Display()
    {
        std::cout << "AccountName: " <<mName<<std::endl;
        std::cout << "AccountNumber: " << mAccountNumber << std::endl;
        std::cout << "AccountMoney: " << mMoney << std::endl;
    }

    void BankAccount::StoreMoney(double money)
    {
        mMoney += money;
    }

    void BankAccount::PickUpMoney(double money)
    {
        mMoney -= money;
    }
}