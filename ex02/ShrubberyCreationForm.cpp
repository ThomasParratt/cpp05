#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm() : AForm("ShrubberyCreationForm", 145, 137)
{
    this->target = "default_target";
    std::cout << "ShrubberyCreationForm default constructor called" << std::endl;
}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm& obj) : AForm("ShrubberyCreationForm", 145, 137)
{
    this->target = obj.target;
    std::cout << "ShrubberyCreationForm copy constructor called" << std::endl;
    //*this = obj;
}

ShrubberyCreationForm::ShrubberyCreationForm(std::string target) : AForm("ShrubberyCreationForm", 145, 137)
{
    this->target = target;
    std::cout << "ShrubberyCreationForm constructor called" << std::endl;
    // if (gradeToSign > 150 || gradeToExecute > 150)
    //     throw GradeTooLowException();
    // else if (gradeToSign < 1 || gradeToExecute < 1)
    //     throw GradeTooHighException();
}

ShrubberyCreationForm::~ShrubberyCreationForm()
{
    std::cout << "ShrubberyCreationForm deconstructor called" << std::endl;
}

ShrubberyCreationForm&  ShrubberyCreationForm::operator=(const ShrubberyCreationForm& obj)
{
    std::cout << "ShrubberyCreationForm copy assignment operator called" << std::endl;
    if (this != &obj)
    {
        this->target = obj.target;
        this->isSigned = obj.isSigned;
    }
    return (*this);
}

int    ShrubberyCreationForm::execute(Bureaucrat const & executor) const
{
    if (this->isSigned == true && executor.getGrade() <= 137)
    {
        std::ofstream   file(this->target + "_shrubbery");

        if (file.is_open())
        {
            file << "   /\\        /\\        /\\   " << std::endl;
            file << "  // \\      // \\      // \\  " << std::endl;
            file << " //// \\    //// \\    //// \\ " << std::endl;
            file << "////// \\  ////// \\  ////// \\" << std::endl;
            file << "   ||        ||        ||      " << std::endl;
            file.close();
        }
        else
            std::cout << "Error opening file" << std::endl;
        return (0);
    }
    else
    {
        if (this->isSigned == false)
            std::cout << "Form is not signed, cannot execute" << std::endl;
        if (executor.getGrade() > 137)
            throw GradeTooLowException();
        return (1);
    }
}