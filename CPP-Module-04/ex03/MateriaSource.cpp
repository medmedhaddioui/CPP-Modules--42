#include "MateriaSource.hpp"

MateriaSource::MateriaSource (void)
{
    std::cout << "Default MateriaSource Constructor called !" << std::endl;
}

MateriaSource::MateriaSource(std::string const &name)
{
    std::cout << "MateriaSource Constructor called !" << std::endl;
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
    return *this;
}

MateriaSource::~MateriaSource()
{
    std::cout << "MateriaSource Destructor called !" << std::endl;
}
void MateriaSource::learnMateria(AMateria* materia)
{
    A[id] = materia->clone();
}
