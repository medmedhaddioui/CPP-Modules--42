#ifndef POINT_HPP
#define POINT_HPP

#include "Fixed.hpp"

class Point
{
    private:
        Fixed const x;
        Fixed const y;
    public:
        Point(void) : x(0), y(0) {};
        Point(float const nbFloatX, float const nbFloatY) : x(nbFloatX) , y(nbFloatY) {};
        Point (Fixed const &objX, Fixed const &objY) : x(objX), y(objY) {};
        Point &operator=(Point const &obj);
        float getX() const ;
        float getY() const ;
        bool operator==(Point const &objR) const ;
        static float areaCal(Point const &obj1, Point const &obj2, Point const &obj3);
        ~Point();

};
bool bsp( Point const a, Point const b, Point const c, Point const point);
#endif