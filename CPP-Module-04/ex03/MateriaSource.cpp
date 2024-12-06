#include "MateriaSource.hpp"

MateriaSource::MateriaSource (void)
{
    std::cout << "Default MateriaSource Constructor called !" << std::endl;
    for (int i = 0; i < 4 ; i ++)
        learn[i] = NULL;
}

MateriaSource::MateriaSource(std::string const &name)
{
    std::cout << "MateriaSource Constructor called !" << std::endl;
    this->name = name;
    for (int i = 0; i < 4 ; i ++)
        learn[i] = NULL;
}
 
MateriaSource::MateriaSource(MateriaSource const &Robj)
{
    std::cout << "MateriaSource copy Constructor called !" << std::endl;
    *this = Robj;
}

MateriaSource &MateriaSource::operator=(MateriaSource const &Robj)
{
    std::cout << "MateriaSource copy assignment Constructor called !" << std::endl;
    if (this == &Robj)
        return *this; 
    this->name = Robj.name;
    for (int i = 0 ; i < 4 ; i ++)
    {
        if (this->learn[i])
            delete learn[i];
        if (Robj.learn[i])
            this->learn[i] = Robj.learn[i]->clone();
        else
            this->learn[i] = NULL;
    }
    return *this;
}

void MateriaSource::learnMateria(AMateria* materia)
{
    for (int i = 0 ; i < 4 ;i++)
    {
        if (learn[i])
            continue;
        learn[i] = materia;
        break;
    }
}

AMateria* MateriaSource::createMateria(std::string const & type)
{
    for (int i = 0 ; i < 4 ; i++)  
    {
        if (learn[i] && learn[i]->getType () == type)
            return learn[i];
    }
    return 0;
}

MateriaSource::~MateriaSource()
{
    std::cout << "MateriaSource Destructor called !" << std::endl;
    for (int i = 0; i < 4 ; i ++)
    {
        if (learn[i])
           delete learn[i];
    }
}