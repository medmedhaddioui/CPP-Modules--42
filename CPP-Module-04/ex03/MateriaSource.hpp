#ifndef MATERIASOURCE_HPP
#define MATERIASOURCE_HPP

#include "AMateria.hpp"
#include "IMateriaSource.hpp"
 
class MateriaSource : public IMateriaSource
{
    private:
        AMateria *learn[4];
    public:
    MateriaSource() ;
    MateriaSource(MateriaSource const &Robj);
    MateriaSource &operator=(MateriaSource const &Robj);
    ~MateriaSource();

    void learnMateria(AMateria* materia);
    AMateria* createMateria(std::string const & type);
};
#endif