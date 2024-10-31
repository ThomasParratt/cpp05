#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm() : AForm("PresidentialPardonForm", 25, 5)
{
    this->target = "pardon_target";
    //std::cout << "PresidentialPardonForm default constructor called" << std::endl;
}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm& obj)  : AForm("PresidentialPardonForm", 25, 5)
{
    this->target = obj.target;
    //std::cout << "PresidentialPardonForm copy constructor called" << std::endl;
}

PresidentialPardonForm::PresidentialPardonForm(std::string target)  : AForm("PresidentialPardonForm", 25, 5)
{
    this->target = target;
    //std::cout << "PresidentialPardonForm constructor called" << std::endl;
}

PresidentialPardonForm::~PresidentialPardonForm()
{
    //std::cout << "PresidentialPardonForm deconstructor called" << std::endl;
}

PresidentialPardonForm&  PresidentialPardonForm::operator=(const PresidentialPardonForm& obj)
{
    //std::cout << "PresidentialPardonForm copy assignment operator called" << std::endl;
    if (this != &obj)
    {
        this->target = obj.target;
        this->isSigned = obj.isSigned;
    }
    return (*this);
}

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