#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm() : AForm("RobotomyRequestForm", 72, 45)
{
    this->target = "robotomy_target";
    std::cout << "RobotomyRequestForm default constructor called" << std::endl;
}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm& obj) : AForm("RobotomyRequestForm", 72, 45)
{
    this->target = obj.target;
    std::cout << "RobotomyRequestForm copy constructor called" << std::endl;
}

RobotomyRequestForm::RobotomyRequestForm(std::string target) : AForm("RobotomyRequestForm", 72, 45)
{
    this->target = target;
    std::cout << "RobotomyRequestForm constructor called" << std::endl;
}

RobotomyRequestForm::~RobotomyRequestForm()
{
    std::cout << "RobotomyRequestForm deconstructor called" << std::endl;
}

RobotomyRequestForm&  RobotomyRequestForm::operator=(const RobotomyRequestForm& obj)
{
    std::cout << "RobotomyRequestForm copy assignment operator called" << std::endl;
    if (this != &obj)
    {
        this->target = obj.target;
        this->isSigned = obj.isSigned;
    }
    return (*this);
}

int    RobotomyRequestForm::execute(Bureaucrat const & executor) const
{
    if (this->isSigned == 1 && executor.getGrade() <= 45)
    {
        std::cout << "Drill, drill! " << this->target << " has been successfully robotomized" << std::endl;
        return (0);
    }
    else
    {
        if (this->isSigned == 0)
            std::cout << "Form is not signed, cannot execute" << std::endl;
        if (executor.getGrade() > 45)
            throw GradeTooLowException();
        return (1);
    }
}