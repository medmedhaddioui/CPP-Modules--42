#include "Serializer.hpp"



int main() {
    Data data;
    Serializer obj;
    uintptr_t holder;

    holder = obj.serialize(&data);
    std::cout << reinterpret_cast <Data *> (holder) << std::endl;
    Data *ptr;
    ptr = obj.deserialize(holder);
    std::cout << ptr << std::endl;
}