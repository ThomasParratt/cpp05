#include "Intern.hpp"

Intern::Intern()
{
    std::cout << "Intern default constructor called" << std::endl;
}

// Intern::Intern(const Intern& obj)
// {
//     std::cout << "Intern copy constructor called" << std::endl;
//     *this = obj;
// }

Intern::~Intern()
{
    std::cout << "Intern deconstructor called" << std::endl;
}

// Intern&  Intern::operator=(const Intern& obj)
// {
//     std::cout << "Intern copy assignment operator called" << std::endl;
//     if (this != &obj)
//     {
//         this->name = obj.name + "_copy";
//         this->isSigned = obj.isSigned;
//         this->gradeToSign = obj.gradeToSign; // can't copy because it's constant...
//     }
//     return (*this);
// }

void    Intern::makeForm(std::string form, std::string target)
{
    std::cout << "Intern creates " << form << " for " << target << std::endl;
    //return (signed_form); //This should return a pointer to the signed form
}