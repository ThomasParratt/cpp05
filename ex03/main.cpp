#include "Bureaucrat.hpp"
#include "AForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.cpp"
#include "Intern.hpp"

int main(void)
{
    std::cout << std::endl << "-----INTERN TEST----" << std::endl << std::endl;
    try
    {
        Bureaucrat  tom("Tom", 2);
        Intern      someRandomIntern;
        AForm*      rrf;
        
        rrf = someRandomIntern.makeForm("RobotomyRequestForm", "Bender");
        rrf->beSigned(tom);
        tom.executeForm(*rrf);
        delete rrf;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << std::endl;
    }
}