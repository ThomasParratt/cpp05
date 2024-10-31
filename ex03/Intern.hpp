#ifndef INTERN_HPP
# define INTERN_HPP

# include <iostream>
# include "AForm.hpp"
# include "ShrubberyCreationForm.hpp"
# include "RobotomyRequestForm.hpp"
# include "PresidentialPardonForm.hpp"

class Intern
{
    private:

    public:
        Intern();
        Intern(const Intern& obj);
        ~Intern();
        Intern&  operator=(const Intern& obj);
        
        AForm   *makeShrubberyCreationForm(std::string target);
        AForm   *makeRobotomyRequestForm(std::string target);
        AForm   *makePresidentialPardonForm(std::string target);
        AForm   *makeForm(std::string form, std::string target);
};

typedef AForm (Intern::*function_pointer)();

#endif