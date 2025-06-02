#ifndef WARLOCK_HPP
#define WARLOCK_HPP
#include <iostream>

class Warlock
{
    private:
        std::string name;
        std::string title;
        Warlock(Warlock const &obj);
        Warlock  &operator=(Warlock const &obj);
    public:
        const std::string &getName() const;
        const std::string &getTitle() const;
        void setTitle(std::string const &_title);
        Warlock(std::string const &_name , std::string const &_title);

        void introduce() const;
        ~Warlock();


};
#endif