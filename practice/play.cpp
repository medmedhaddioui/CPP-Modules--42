#include <iostream>
#include <string>

class Bank_Africa
{
    int withdraw;
    std::string change_user_name;
public:
    std::string account_name;
    int balance;
    void withdraw_func()
    {
        balance -= withdraw;
    }   
    Bank_Africa(int value)
    {
        withdraw = value;
    }
    Bank_Africa()
    {
        withdraw = 100;
    }
     Bank_Africa(std::string str)
    {
        change_user_name = str;
        account_name = change_user_name;
    }
};

int main ()
{
    Bank_Africa account; 
    account.balance = 1500;
    account.account_name = "Mohammed";
    account.withdraw_func();
    std::cout << account.account_name << " has : " << account.balance << std::endl;

    Bank_Africa account2(500);
    account2.balance = 3500;
    account2.account_name = "Ali";
    account2.withdraw_func();
    std::cout << account2.account_name << " has : " << account2.balance << std::endl;
    return 0;
}