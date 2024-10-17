#ifndef FIXED_HPP
#define FIXED_HPP
#include <iostream>

class Fixed
{
    private:
        int fixed_value;
        static const int fractional  ;
    public:
        Fixed( void );
        Fixed (const int integer);
        Fixed (const float number);
        Fixed(Fixed &orignal);
        Fixed& operator=(const Fixed &orignal);
        ~Fixed();
        int getRawBits( void ) const;
        void setRawBits( int const raw );
        float toFloat( void ) const;
        int toInt( void ) const;
};

#endif