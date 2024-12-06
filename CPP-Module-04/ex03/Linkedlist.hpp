#ifndef LINKEDLIST_HPP
#define LINKEDLIST_HPP

#include "AMateria.hpp"

typedef struct s_MateriaSave
{
    AMateria *saveAdr;
    s_MateriaSave *next;
} t_MateriaSave;

t_MateriaSave *AddNode(t_MateriaSave *head, t_MateriaSave * node);
t_MateriaSave *CreateNode (AMateria *data);
void    deleteList(t_MateriaSave* lst);

#endif