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

AForm    *Intern::makeForm(std::string form, std::string target)
{
    std::string         forms[3] = {"ShrubberyCreationForm", "RobotomyRequestForm", "PresidentialPardonForm"};
    function_pointer    functions[3] = {&Intern::makeShrubberyCreationForm, &Intern::makeRobotomyRequestForm, &Intern::makePresidentialPardonForm};

    for (int i = 0; i < 3; i++)
    {
        if (form == forms[i])
        {
            return(this->*functions[i])(target);
        }
    }
    throw WrongFormException();
}

const char* Intern::WrongFormException::what() const noexcept
{
    return ("Form name does not exist!");
}