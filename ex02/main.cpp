#include "Bureaucrat.hpp"
#include "AForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

int main(void)
{
    std::cout << std::endl << "-----TRYING TO EXECUTE USING executeForm()----" << std::endl << std::endl;
    try
    {
        Bureaucrat  b1("b1", 146);
        //Bureaucrat  b2("b1", 137);

        std::cout << b1 << std::endl;
        //std::cout << b2 << std::endl;

        ShrubberyCreationForm   shrub("home");
        // RobotomyRequestForm     robo("Bender");
        // PresidentialPardonForm  pardon("Bill");

        shrub.beSigned(b1);
        shrub.signForm(b1);
        b1.executeForm(shrub);

        // shrub.beSigned(b2);
        // shrub.signForm(b2);
        // b2.executeForm(shrub);

        // robo.beSigned(tom);
        // tom.executeForm(robo);

        // pardon.beSigned(tom);
        // tom.executeForm(pardon);
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << std::endl;
    }
}