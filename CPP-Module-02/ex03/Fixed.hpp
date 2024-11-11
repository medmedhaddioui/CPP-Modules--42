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
        bool operator>(Fixed const &objR) const ;
        bool operator<(Fixed const &objR) const ;
        bool operator>=(Fixed const &objR) const ;
        bool operator<=(Fixed const &objR) const ;
        bool operator==(Fixed const &objR) const ;
        bool operator!=(Fixed const &objR) const ;


        float operator+(Fixed const &objR) const ;
        float operator-(Fixed const &objR) const ;
        float operator*(Fixed const &objR) const ;
        float operator/(Fixed const &objR) const ;


        Fixed operator++();
        Fixed operator++(int);
        Fixed operator--();
        Fixed operator--(int);
        
        static Fixed &min (Fixed &objL, Fixed &objR);
        static Fixed const &min (Fixed const &objL, Fixed const &objR);
        static Fixed &max (Fixed &objL, Fixed &objR);
        static  Fixed const &max (Fixed const &objL, Fixed const &objR);

};

std::ostream &operator<< (std::ostream &out, Fixed const &obj);
#endif
