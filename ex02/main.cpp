#include "Bureaucrat.hpp"
#include "AForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

int main(void)
{
    std::cout << std::endl << "-----BUREAUCRAT GRADE TOO LOW TO SIGN SHRUBBERY----" << std::endl << std::endl;
    try
    {
        Bureaucrat  b1("b1", 146);

        std::cout << b1 << std::endl;

        ShrubberyCreationForm   shrub("home");

        std::cout << shrub << std::endl;
        shrub.beSigned(b1);
        std::cout << shrub << std::endl;
        shrub.signForm(b1);
        b1.executeForm(shrub);
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << std::endl;
    }
    std::cout << std::endl << "-----BUREAUCRAT GRADE TOO LOW TO EXECUTE SHRUBBERY----" << std::endl << std::endl;
    try
    {
        Bureaucrat  b1("b1", 145);

        std::cout << b1 << std::endl;

        ShrubberyCreationForm   shrub("home");

        std::cout << shrub << std::endl;
        shrub.beSigned(b1);
        std::cout << shrub << std::endl;
        shrub.signForm(b1);
        b1.executeForm(shrub);
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << std::endl;
    }
    std::cout << std::endl << "-----EXECUTE SHRUBBERY----" << std::endl << std::endl;
    try
    {
        Bureaucrat  b1("b1", 137);

        std::cout << b1 << std::endl;

        ShrubberyCreationForm   shrub("home");

        std::cout << shrub << std::endl;
        shrub.beSigned(b1);
        std::cout << shrub << std::endl;
        shrub.signForm(b1);
        b1.executeForm(shrub);
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << std::endl;
    }
}