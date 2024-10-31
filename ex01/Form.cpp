#include "Form.hpp"

Form::Form() : name("default_form"), isSigned(false), gradeToSign(0), gradeToExecute(0)
{
    //std::cout << "Form default constructor called" << std::endl;
}

Form::Form(const Form& obj) : name(obj.name), isSigned(obj.isSigned), gradeToSign(obj.gradeToSign), gradeToExecute(obj.gradeToExecute)
{
    //std::cout << "Form copy constructor called" << std::endl;
}

Form::Form(std::string name, int gradeToSign, int gradeToExecute) : name(name), isSigned(false), gradeToSign(gradeToSign), gradeToExecute(gradeToExecute)
{
    //std::cout << "Form constructor called" << std::endl;
    if (gradeToSign > 150 || gradeToExecute > 150)
        throw GradeTooLowException();
    else if (gradeToSign < 1 || gradeToExecute < 1)
        throw GradeTooHighException();
}

Form::~Form()
{
    //std::cout << "Form deconstructor called" << std::endl;
}

Form&  Form::operator=(const Form& obj)
{
    //std::cout << "Form copy assignment operator called" << std::endl;
    if (this != &obj)
    {
        this->isSigned = obj.isSigned;
    }
    return (*this);
}

std::string   Form::getName() const
{
    return (this->name);
}

bool    Form::getIsSigned() const
{
    return (this->isSigned);
}

int     Form::getGradeToSign() const
{
    return (this->gradeToSign);
}

int     Form::getGradeToExecute() const
{
    return (this->gradeToExecute);
}

void    Form::beSigned(Bureaucrat& obj)
{
    if (obj.getGrade() <= this->gradeToSign)
        this->isSigned = true;
    else
        throw GradeTooLowException();
}

void    Form::signForm(Bureaucrat& obj)
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

const char* Form::GradeTooHighException::what() const noexcept
{
    return ("Grade is too high!");
}

const char* Form::GradeTooLowException::what() const noexcept
{
    return ("Grade is too low!");
}

std::ostream&   operator<<(std::ostream& os, const Form& obj)
{
    os << obj.getName() << ", Is signed? " << obj.getIsSigned() << ", Grade to sign: " << obj.getGradeToSign() << ", Grade to execute: " << obj.getGradeToExecute();
    return (os);
}