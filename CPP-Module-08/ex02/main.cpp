#include "MutantStack.hpp"
int main ()
{
    MutantStack<int> mstack;
    mstack.push(5);
    mstack.push(17);
    mstack.push(1222);
    mstack.printTmp();
}