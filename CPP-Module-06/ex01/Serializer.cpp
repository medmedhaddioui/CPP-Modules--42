#include "Serializer.hpp"
Serializer::Serializer()
{
    std::cout << "Serializer Constructor called " << std::endl;
}

Serializer::Serializer(Serializer const &obj)
{
    (void) obj;
    std::cout << "Serializer Copy Constructor called " << std::endl;
}

Serializer &Serializer::operator=(Serializer const &obj)
{
    std::cout << "Copy Assignmenet called !" << std::endl;
    (void) obj;
    return *this;
}

Serializer::~Serializer()
{
    std::cout << "Serializer Destructor called !" << std::endl;
}

uintptr_t Serializer::serialize(Data* ptr)
{
    // uintptr_t res = static_cast <uintptr_t> (*ptr);
    // return  res;
}
Data *Serializer::deserialize(uintptr_t raw)
{
   // Data *ptr = static_cast < 
}