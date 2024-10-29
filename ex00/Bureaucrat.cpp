#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat() : name("default"), grade(100)
{
    std::cout << "Bureaucrat default constructor called" << std::endl;
}

Bureaucrat::Bureaucrat(const Bureaucrat& obj) : name(obj.name), grade(obj.grade)
{
    std::cout << "Bureaucrat copy constructor called" << std::endl;
}

Bureaucrat::Bureaucrat(std::string name, int grade) : name(name), grade(grade)
{
    std::cout << "Bureaucrat constructor called" << std::endl;
    if (grade > 150)
        throw GradeTooLowException();
    else if (grade < 1)
        throw GradeTooHighException();
}

Bureaucrat::~Bureaucrat()
{
    std::cout << "Bureaucrat deconstructor called" << std::endl;
}

Bureaucrat&  Bureaucrat::operator=(const Bureaucrat& obj)
{
    std::cout << "Bureaucrat copy assignment operator called" << std::endl;
    if (this != &obj)
    {
        this->grade = obj.grade;
    }
    return (*this);
}

std::string   Bureaucrat::getName() const
{
    return (this->name);
}

int Bureaucrat::getGrade() const
{
    return (this->grade);
}

void    Bureaucrat::incrementGrade()
{
    this->grade--;
    std::cout << "Grade incremented to " << this->grade << std::endl;
    if (grade < 1)
        throw GradeTooHighException();
}

void    Bureaucrat::decrementGrade()
{
    this->grade++;
    std::cout << "Grade decremented to " << this->grade << std::endl;
    if (grade > 150)
        throw GradeTooLowException();
}

const char* Bureaucrat::GradeTooHighException::what() const noexcept
{
    return ("Grade is too high!");
}

const char* Bureaucrat::GradeTooLowException::what() const noexcept
{
    return ("Grade is too low!");
}

std::ostream&   operator<<(std::ostream& os, const Bureaucrat& obj)
{
    os << obj.getName() << ", bureaucrat grade " << obj.getGrade();
    return (os);
}