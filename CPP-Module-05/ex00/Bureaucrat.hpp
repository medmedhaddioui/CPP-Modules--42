#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP

#include <iostream>

class Bureaucrat
{
    private:
        const std::string name;
        int grade;
    public: 
        Bureaucrat(std::string name, int grade);
        std::string getName () const ;
        int getGrade() const ;
        void incrementGrade();
        void decrementGrade();
};

std::ostream &operator<<(std::ostream &out, Bureaucrat &obj);

#endif