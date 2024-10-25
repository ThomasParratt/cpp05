#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm() : target("PresidentialPardonForm_target")
{
    this->isSigned = 0;
    this->gradeToSign = 25;
    this-> gradeToExecute = 5;
    std::cout << "PresidentialPardonForm default constructor called" << std::endl;
}

// PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm& obj)
// {
//     std::cout << "PresidentialPardonForm copy constructor called" << std::endl;
//     *this = obj;
// }

PresidentialPardonForm::PresidentialPardonForm(std::string target) : target(target)
{
    std::cout << "PresidentialPardonForm constructor called" << std::endl;
    this->isSigned = 0;
    this->gradeToSign = 25;
    this-> gradeToExecute = 5;
    // if (gradeToSign > 150 || gradeToExecute > 150)
    //     throw GradeTooLowException();
    // else if (gradeToSign < 1 || gradeToExecute < 1)
    //     throw GradeTooHighException();
}

PresidentialPardonForm::~PresidentialPardonForm()
{
    std::cout << "PresidentialPardonForm deconstructor called" << std::endl;
}

// PresidentialPardonForm&  PresidentialPardonForm::operator=(const PresidentialPardonForm& obj)
// {
//     std::cout << "PresidentialPardonForm copy assignment operator called" << std::endl;
//     if (this != &obj)
//     {
//         this->name = obj.name + "_copy";
//         this->isSigned = obj.isSigned;
//         this->gradeToSign = obj.gradeToSign; // can't copy because it's constant...
//     }
//     return (*this);
// }

int    PresidentialPardonForm::execute(Bureaucrat const & executor) const
{
    if (this->isSigned == 1 && executor.getGrade() <= 5)
    {
        std::cout << this->target << " has been pardoned by Zaphod Beeblebrox" << std::endl;
        return (0);
    }
    else
    {
        if (this->isSigned == 0)
            std::cout << "Form is not signed, cannot execute" << std::endl;
        if (executor.getGrade() > 5)
            throw GradeTooLowException();
        return (1);
    }
}