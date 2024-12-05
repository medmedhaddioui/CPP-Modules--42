#include "MateriaSource.hpp"

MateriaSource::MateriaSource (void)
{
    std::cout << "Default MateriaSource Constructor called !" << std::endl;
     id = 0;
}

MateriaSource::MateriaSource(std::string const &name)
{
    std::cout << "MateriaSource Constructor called !" << std::endl;
    this->name = name;
    id= 0;
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
    A[id++] = materia->clone();
}
AMateria* MateriaSource::createMateria(std::string const & type)
{
    for (int i = 0 ; i < 4 ; i++)  
    {
        if (A[i]->getType () == type)
        {
            std::cout << "Here" << std::endl;
            return A[i];
        }
    }
    return 0;
}