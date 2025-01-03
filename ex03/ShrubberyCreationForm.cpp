#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm() : AForm("ShrubberyCreationForm", 145, 137)
{
    this->target = "shrubbery_target";
    //std::cout << "ShrubberyCreationForm default constructor called" << std::endl;
}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm& obj) : AForm("ShrubberyCreationForm", 145, 137)
{
    this->target = obj.target;
    //std::cout << "ShrubberyCreationForm copy constructor called" << std::endl;
}

ShrubberyCreationForm::ShrubberyCreationForm(std::string target) : AForm("ShrubberyCreationForm", 145, 137)
{
    this->target = target;
    //std::cout << "ShrubberyCreationForm constructor called" << std::endl;
}

ShrubberyCreationForm::~ShrubberyCreationForm()
{
    //std::cout << "ShrubberyCreationForm deconstructor called" << std::endl;
}

ShrubberyCreationForm&  ShrubberyCreationForm::operator=(const ShrubberyCreationForm& obj)
{
    //std::cout << "ShrubberyCreationForm copy assignment operator called" << std::endl;
    if (this != &obj)
    {
        this->target = obj.target;
    }
    return (*this);
}

int    ShrubberyCreationForm::execute(Bureaucrat const & executor) const
{
    if (this->getIsSigned() == true && executor.getGrade() <= 137)
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
        if (this->getIsSigned() == false)
            std::cout << "Incorrect form status, cannot execute" << std::endl;
        if (executor.getGrade() > 137)
            throw GradeTooLowException();
        return (1);
    }
}