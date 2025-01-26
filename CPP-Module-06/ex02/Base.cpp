#include "Base.hpp"
#include "A.hpp"
#include "B.hpp"
#include "C.hpp"

Base *Base::generate(void)
{
    int num = std::time(0) % 10;
    if (num > 6)
        return new A;
    else if (num > 3)
        return new B;
    else
        return new C;
}

void Base::identify(Base *p)
{
    if (dynamic_cast<A *> (p))
        std::cout << "A" << std::endl;
    else if (dynamic_cast<B *> (p))
        std::cout << "B" << std::endl;
    else
        std::cout << "C" << std::endl;
}
void Base::identify(Base &p)
{
    try 
    {
        (void) dynamic_cast<A&> (p);
        std::cout << "A" << std::endl;
    }
    catch (...)
    {
        try
        {
            (void )dynamic_cast <B&> (p);
            std::cout << "B" << std::endl;
        }
        catch (...)
        {
            std::cout << "C" << std::endl;
        }
    }
}
Base::~Base()
{
}