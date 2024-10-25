#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm() : target("ShrubberyCreationForm_target")
{
    this->isSigned = 0;
    this->gradeToSign = 145;
    this-> gradeToExecute = 137;
    std::cout << "ShrubberyCreationForm default constructor called" << std::endl;
}

// ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm& obj)
// {
//     std::cout << "ShrubberyCreationForm copy constructor called" << std::endl;
//     *this = obj;
// }

ShrubberyCreationForm::ShrubberyCreationForm(std::string target) : target(target)
{
    std::cout << "ShrubberyCreationForm constructor called" << std::endl;
    this->isSigned = 0;
    this->gradeToSign = 145;
    this-> gradeToExecute = 137;
    // if (gradeToSign > 150 || gradeToExecute > 150)
    //     throw GradeTooLowException();
    // else if (gradeToSign < 1 || gradeToExecute < 1)
    //     throw GradeTooHighException();
}

ShrubberyCreationForm::~ShrubberyCreationForm()
{
    std::cout << "ShrubberyCreationForm deconstructor called" << std::endl;
}

// ShrubberyCreationForm&  ShrubberyCreationForm::operator=(const ShrubberyCreationForm& obj)
// {
//     std::cout << "ShrubberyCreationForm copy assignment operator called" << std::endl;
//     if (this != &obj)
//     {
//         this->name = obj.name + "_copy";
//         this->isSigned = obj.isSigned;
//         this->gradeToSign = obj.gradeToSign; // can't copy because it's constant...
//     }
//     return (*this);
// }

int    ShrubberyCreationForm::execute(Bureaucrat const & executor) const
{
    if (this->isSigned == 1 && executor.getGrade() <= 137)
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
        if (this->isSigned == 0)
            std::cout << "Form is not signed, cannot execute" << std::endl;
        if (executor.getGrade() > 137)
            throw GradeTooLowException();
        return (1);
    }
}