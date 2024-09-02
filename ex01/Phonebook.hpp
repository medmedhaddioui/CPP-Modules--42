#ifndef PHONE_BOOK_HPP
#define PHONE_BOOK_HPP

#include "Contact.hpp"

class PhoneBook
{
private:
    int index;
    Contact contacts_arr[8];
public:
    void ADD();
    void SEARCH();
    void EXIT();
    void set_index();
    std::string read_cmd (std::string msg);
};

#endif