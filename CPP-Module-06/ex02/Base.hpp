#ifndef BASE_HPP
#define BASE_HPP
class A;
class B;
class C;
#include <iostream>
#include <ctime>
class Base
{
    public : 
        Base *generate (void);
        void identify(Base *p);
        void identify (Base &p);
        virtual ~Base();
};
#endif