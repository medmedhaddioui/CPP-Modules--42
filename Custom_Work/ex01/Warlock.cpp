#include "Warlock.hpp"

const std::string &Warlock::getName() const
{
    return name;
}
const std::string &Warlock::getTitle() const
{
    return title;
}
void Warlock::setTitle(const std::string &_title)
{
    this->title = _title;
}
void Warlock::introduce() const
{
    std::cout << this->name << ": I am " << this->name << ", " << this->title << "!" <<  std::endl;
}
Warlock::Warlock(std::string const &_name , std::string const &_title)
{
    this->name = _name;
    this->title = _title;
    std::cout << this->name << ": This looks like another boring day." << std::endl;
}
// Warlock::Warlock(Warlock const &obj)
// {
//     *this = obj;
// }

// Warlock &Warlock::operator=(Warlock const &obj){
//     if (this == &obj)
//         return *this;
//     this->title = obj.title;
//     this->name = obj.name;
//     return *this;
// }

Warlock::~Warlock()
{
     std::cout << this->name << ": My job here is done!" << std::endl;
}