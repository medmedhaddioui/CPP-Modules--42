#include <iostream>
#include <string>

class Bank_Africa
{
public:
    std::string account_name;
    int balance;
    Bank_Africa(std::string account_name, int balance)
    {
        this->account_name = account_name;
        this->balance = balance;
    }
};

int main ()
{
    Bank_Africa object("simo" , 1000, 500);
    std::cout << object.account_name << object.balance << std::endl;
    return 0;

}