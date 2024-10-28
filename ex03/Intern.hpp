#ifndef INTERN_HPP
# define INTERN_HPP

# include <iostream>
# include "AForm.hpp"

class Bureaucrat;

class Intern
{
    private:

    public:
        Intern();
        //Intern(const AForm& obj);
        ~Intern();
        //Intern&  operator=(const Intern& obj);
        
        AForm    *makeForm(AForm *form, Bureaucrat target);
};

#endif