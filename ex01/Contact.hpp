#ifndef Contact_HPP
#define Contact_HPP

#include <iostream>
#include <cstdlib>
#include <iomanip>  
#include <sstream>
#include <string>

class Contact
{
private:    
    std::string FirstName;
    std::string LastName;
    std::string Nickname;
    std::string PhoneNumber;
    std::string DarkSecret;
public:
    std::string get_Fname();
    std::string get_Lname();
    std::string get_Nname();
    std::string get_Pnumber();
    std::string get_Dsecret();
    void set_Fname(std::string str);
    void set_Lname(std::string str);
    void set_Nname(std::string str);
    void set_Pnumber(std::string str);
    void set_Dsecret(std::string str);
    
};

#endif