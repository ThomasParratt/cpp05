#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm() : target("RobotomyRequestForm_target")
{
    this->isSigned = 0;
    this->gradeToSign = 72;
    this-> gradeToExecute = 45;
    std::cout << "RobotomyRequestForm default constructor called" << std::endl;
}

// RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm& obj)
// {
//     std::cout << "RobotomyRequestForm copy constructor called" << std::endl;
//     *this = obj;
// }

RobotomyRequestForm::RobotomyRequestForm(std::string target) : target(target)
{
    std::cout << "RobotomyRequestForm constructor called" << std::endl;
    this->isSigned = 0;
    this->gradeToSign = 72;
    this-> gradeToExecute = 45;
    // if (gradeToSign > 150 || gradeToExecute > 150)
    //     throw GradeTooLowException();
    // else if (gradeToSign < 1 || gradeToExecute < 1)
    //     throw GradeTooHighException();
}

RobotomyRequestForm::~RobotomyRequestForm()
{
    std::cout << "RobotomyRequestForm deconstructor called" << std::endl;
}

// RobotomyRequestForm&  RobotomyRequestForm::operator=(const RobotomyRequestForm& obj)
// {
//     std::cout << "RobotomyRequestForm copy assignment operator called" << std::endl;
//     if (this != &obj)
//     {
//         this->name = obj.name + "_copy";
//         this->isSigned = obj.isSigned;
//         this->gradeToSign = obj.gradeToSign; // can't copy because it's constant...
//     }
//     return (*this);
// }

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