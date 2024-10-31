#include "AForm.hpp"

AForm::AForm() : name("AForm_name"), isSigned(false), gradeToSign(0), gradeToExecute(0)
{
    std::cout << "AForm default constructor called" << std::endl;
}

AForm::AForm(const AForm& obj) : name(obj.name), isSigned(obj.isSigned), gradeToSign(obj.gradeToSign), gradeToExecute(obj.gradeToExecute)
{
    std::cout << "AForm copy constructor called" << std::endl;
}

AForm::AForm(std::string name, int gradeToSign, int gradeToExecute) : name(name), isSigned(false), gradeToSign(gradeToSign), gradeToExecute(gradeToExecute)
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

AForm&  AForm::operator=(const AForm& obj)
{
    std::cout << "AForm copy assignment operator called" << std::endl;
    if (this != &obj)
    {
        //this->name = obj.name + "_copy";
        this->isSigned = obj.isSigned;
        //this->gradeToSign = obj.gradeToSign; // can't copy because it's constant...
    }
    return (*this);
}

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
    if (obj.getGrade() <= this->gradeToSign)
        this->isSigned = 1;
    else
        GradeTooLowException();
}

void    AForm::signForm(Bureaucrat& obj)
{
    if (this->isSigned && obj.getGrade() <= this->gradeToExecute)
        std::cout << obj.getName() << " signed " << this->name << std::endl;
    else if (obj.getGrade() > this->gradeToExecute)
    {
        if (!this->isSigned)
            std::cout << obj.getName() << " couldn't sign " << this->name << " because of incorrect form status" << std::endl;
        else
            std::cout << obj.getName() << " couldn't sign " << this->name << " because grade to execute is too low" << std::endl;
    }
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