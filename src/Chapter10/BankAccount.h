#ifndef BankAccount_H_
#define BankAccount_H_

#include <string>
 
namespace Bank
{
    class BankAccount
    {
    private:
        std::string mName;
        std::string mAccountNumber;
        double mMoney;
    public:
        BankAccount(std::string name, std::string accountNumber, double money = 0.0);
        ~BankAccount();
        void Display();
        void StoreMoney(double money);
        void PickUpMoney(double money);
    };
}

#endif