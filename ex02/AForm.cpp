#include "AForm.hpp"

AForm::AForm() : name("AForm_name"), isSigned(0), gradeToSign(0), gradeToExecute(0)
{
    std::cout << "AForm default constructor called" << std::endl;
}

// AForm::AForm(const AForm& obj)
// {
//     std::cout << "AForm copy constructor called" << std::endl;
//     *this = obj;
// }

AForm::AForm(int gradeToSign, int gradeToExecute) : name("AForm_name"), gradeToSign(gradeToSign), gradeToExecute(gradeToExecute)
{
    std::cout << "AForm constructor called" << std::endl;
    if (gradeToSign > 150 || gradeToExecute > 150)
        throw GradeTooLowException();
    else if (gradeToSign < 1 || gradeToExecute < 1)
        throw GradeTooHighException();
}

AForm::~AForm()
{
    std::cout << "AForm deconstructor called" << std::endl;
}

// AForm&  AForm::operator=(const AForm& obj)
// {
//     std::cout << "AForm copy assignment operator called" << std::endl;
//     if (this != &obj)
//     {
//         this->name = obj.name + "_copy";
//         this->isSigned = obj.isSigned;
//         this->gradeToSign = obj.gradeToSign; // can't copy because it's constant...
//     }
//     return (*this);
// }

std::string   AForm::getName() const
{
    return (this->name);
}

bool    AForm::getIsSigned() const
{
    return (this->isSigned);
}

int     AForm::getGradeToSign() const
{
    return (this->gradeToSign);
}

int     AForm::getGradeToExecute() const
{
    return (this->gradeToExecute);
}

void    AForm::beSigned(Bureaucrat& obj)
{
    if (obj.getGrade() < this->gradeToSign)
        this->isSigned = 1;
    else
        GradeTooLowException();
}

void    AForm::signAForm(Bureaucrat& obj)
{
    if (this->isSigned)
        std::cout << obj.getName() << " signed " << this->name << std::endl;
    else
        std::cout << obj.getName() << " couldn't sign " << this->name << " because...GIVE REASON" << std::endl;
}

const char* AForm::GradeTooHighException::what() const noexcept
{
    return ("Grade is too high!");
}

const char* AForm::GradeTooLowException::what() const noexcept
{
    return ("Grade is too low!");
}

std::ostream&   operator<<(std::ostream& os, const AForm& obj)
{
    os << obj.getName() << ", Is signed? " << obj.getIsSigned() << ", Grade to sign: " << obj.getGradeToSign() << ", Grade to execute: " << obj.getGradeToExecute();
    return (os);
}