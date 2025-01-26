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
    return (reinterpret_cast <uintptr_t> (ptr));
}
Data *Serializer::deserialize(uintptr_t raw)
{
   return (reinterpret_cast <Data*> (raw));
}