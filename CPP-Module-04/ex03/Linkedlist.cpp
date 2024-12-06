#include "Linkedlist.hpp"

t_MateriaSave *AddNode(t_MateriaSave *head, t_MateriaSave * node)
{
    if (!node)
        return head; 
    t_MateriaSave *tmp;
    tmp = head;
    head  = node;
    head->next = tmp;    
    return head;
}

t_MateriaSave *CreateNode (AMateria *data)
{
    if (!data)
        return NULL; 
    t_MateriaSave *n;
    n = new t_MateriaSave;
    n->saveAdr = data;
    n->next = NULL;
    return n;
}

void    deleteList(t_MateriaSave* lst)
{
    while (lst)
    {
        t_MateriaSave* next = lst->next;
        delete lst->saveAdr;
        delete lst;
        lst = next;
    }
}

