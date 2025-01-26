#include "Base.hpp"
int main ()
{
    Base *base = NULL;
    base = base->generate();
    base->identify(base);
    base->identify(*base);
    delete base ;
    return 0;
}