#include "Form.hpp"

Form::Form() : name("Form_name"), isSigned(0), gradeToSign(0), gradeToExecute(0)
{
    std::cout << "Form default constructor called" << std::endl;
}

// Form::Form(const Form& obj)
// {
//     std::cout << "Form copy constructor called" << std::endl;
//     *this = obj;
// }

Form::Form(int gradeToSign, int gradeToExecute) : name("Form_name"), gradeToSign(gradeToSign), gradeToExecute(gradeToExecute)
{
    std::cout << "Form constructor called" << std::endl;
    if (gradeToSign > 150 || gradeToExecute > 150)
        throw GradeTooLowException();
    else if (gradeToSign < 1 || gradeToExecute < 1)
        throw GradeTooHighException();
}

Form::~Form()
{
    std::cout << "Form deconstructor called" << std::endl;
}

// Form&  Form::operator=(const Form& obj)
// {
//     std::cout << "Form copy assignment operator called" << std::endl;
//     if (this != &obj)
//     {
//         this->name = obj.name + "_copy";
//         this->isSigned = obj.isSigned;
//         this->gradeToSign = obj.gradeToSign; // can't copy because it's constant...
//     }
//     return (*this);
// }

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
    if (obj.getGrade() < this->gradeToSign)
        this->isSigned = 1;
    else
        GradeTooLowException();
}

void    Form::signForm(Bureaucrat& obj)
{
    if (this->isSigned)
        std::cout << obj.getName() << " signed " << this->name << std::endl;
    else
        std::cout << obj.getName() << " couldn't sign " << this->name << " because...GIVE REASON" << std::endl;
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