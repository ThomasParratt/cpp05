#include "Intern.hpp"

Intern::Intern()
{
    //std::cout << "Intern default constructor called" << std::endl;
}

Intern::Intern(const Intern& obj)
{
    //std::cout << "Intern copy constructor called" << std::endl;
    *this = obj;
}

Intern::~Intern()
{
    //std::cout << "Intern deconstructor called" << std::endl;
}

Intern&  Intern::operator=(const Intern& obj)
{
    //std::cout << "Intern copy assignment operator called" << std::endl;
    if (this != &obj) {}
    return (*this);
}

AForm   *Intern::makeShrubberyCreationForm(std::string target)
{
    return (new ShrubberyCreationForm(target));
}

AForm   *Intern::makeRobotomyRequestForm(std::string target)
{
    return (new RobotomyRequestForm(target));
}

AForm   *Intern::makePresidentialPardonForm(std::string target)
{
    return (new PresidentialPardonForm(target));
}

// AForm    *Intern::makeForm(std::string form, std::string target)
// {
//     std::cout << "Intern creates " << form << " for " << target << std::endl;
//     if (form == "ShrubberyCreationForm")
//         return (makeShrubberyCreationForm(target));
//     else if (form == "RobotomyRequestForm")
//         return (makeRobotomyRequestForm(target));
//     else if (form == "PresidentialPardonForm")
//         return (makePresidentialPardonForm(target));
//     else
//     {
//         std::cout << "Form " << form << " does not exist" << std::endl;
//         return (0);
//     }
// }

AForm    *Intern::makeForm(std::string form, std::string target)
{
    std::string         forms[3] = {"ShrubberyCreationForm", "RobotomyRequestForm", "PresidentialPardonForm"};
    function_pointer    functions[3] = {&Intern::makeShrubberyCreationForm, &Intern::makeRobotomyRequestForm, &Intern::makePresidentialPardonForm};
}