#ifndef FIXED_HPP
#define FIXED_HPP
#include <iostream>
#include <cmath>

class Fixed
{
    private:
        int fixed_value;
        static const int fractional  ;
    public:
        Fixed( void );
        Fixed (Fixed const &obj);
        Fixed& operator=(const Fixed &orignal);
        ~Fixed();
        
        Fixed (const int integer);
        Fixed (const float floatNumber);
        int getRawBits( void ) const;
        void setRawBits( int const raw );
        float toFloat( void ) const;
        int toInt( void ) const;


};

std::ostream &operator<< (std::ostream &out, Fixed const &obj);
bool operator>(Fixed const objL,Fixed const &objR);
bool operator<(Fixed const objL,Fixed const &objR);
bool operator>=(Fixed const objL,Fixed const &objR);
bool operator<=(Fixed const objL,Fixed const &objR);
bool operator==(Fixed const objL,Fixed const &objR);
bool operator!=(Fixed const objL,Fixed const &objR);






#endif
