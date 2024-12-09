#ifndef BRAIN_HPP
#define BRAIN_HPP

#define SIZE_NB 100
#include <iostream>
class Brain
{
    private:
        std::string ideas[SIZE_NB];
    public:
    Brain(void);
    Brain(Brain const &Robj);
    Brain &operator=(Brain const &obj);
    ~Brain();

    std::string *get_ideas();
};
#endif