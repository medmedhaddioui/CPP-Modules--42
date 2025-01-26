// #include <iostream>
// class Base 
// {
//     public :
//         void Display()
//         {
//             std::cout << "Base Here" << std::endl;
//         }
// };
// class Derived : public Base
// {
//     public :
//         void Display()
//         {
//             std::cout << "Derived Here" << std::endl;
//         }
// };
// class Derived2 : public Base{
//     public:
//         void Display()
//         {
//             std::cout <<" Derived Here 2" << std::endl;
//         }
// };

// int main ()
// {
//     Base *ba = new Derived2;
//     // Derived *deri = new Derived;

//     Derived *deri = static_cast <Derived*> (ba);
//     if (!deri)
//         return 1;
//     deri->Display();
// }





#include <iostream>
#include <typeinfo>

class Base {
public:
    virtual void display() { std::cout << "Base class\n"; }
};

class Derived : public Base {
public:
    void display() override { std::cout << "Derived class\n"; }
};

void demonstrateCasts() {
    // Implicit cast example
    int intValue = 10;
    double doubleValue;

    doubleValue = intValue;

    // Static cast example
    double doubleNumber = 9.7;
    int intNumber;

   intNumber = static_cast <int> (doubleNumber);

    // Dynamic cast example
    Base* basePtr = new Derived();
    Derived* derivedPtr;
    derivedPtr = dynamic_cast <Derived*> (basePtr); 
    // Const cast example
    const int constantValue = 42;
    int* modifiablePtr;

    modifiablePtr = const_cast <int *> (&constantValue);
    // Reinterpret cast example
    int* someNumber = new int(5);
    char* bytePointer;

    bytePointer = reinterpret_cast<char *> (someNumber);
    delete basePtr;
    delete someNumber;
}

int main() {
    demonstrateCasts();
    return 0;
}

