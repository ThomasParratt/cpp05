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
        Bureaucrat  tom("Tom", 2); // use different bureaucrats with different grades to test different forms

        std::cout << tom << std::endl;

        ShrubberyCreationForm   shrub("home");
        RobotomyRequestForm     robo("Bender");
        PresidentialPardonForm  pardon("Bill");

        shrub.beSigned(tom);
        tom.executeForm(shrub);

        robo.beSigned(tom);
        tom.executeForm(robo);

        pardon.beSigned(tom);
        tom.executeForm(pardon);
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << std::endl;
    }
}