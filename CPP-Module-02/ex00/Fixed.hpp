#ifndef FIXED_HPP
#define FIXED_HPP
#include <iostream>

class Fixed
{
    private:
        int fixed_value;
        static const int value ;
    public:
        Fixed( void );
        Fixed(Fixed &orignal);
        Fixed& operator=(const Fixed &orignal);
        ~Fixed();
        int getRawBits( void ) const;
        void setRawBits( int const raw );
};

#endif