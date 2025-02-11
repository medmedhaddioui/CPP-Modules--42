#include "Serializer.hpp"

int main() {
    Data data;
    Serializer obj;
    uintptr_t holder;
    Data *ptr;
    data.var = 5;

    holder = obj.serialize((Data * )0xfffffff);
    std::cout << holder << std::endl;
    ptr = obj.deserialize(holder);
    std::cout << ptr << std::endl;
    std::cout << ptr->var << std::endl;
}