#include "Bureaucrat.hpp"
#include "AForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

int main(void)
{
    // std::cout << std::endl << "-----DECREMENT GRADE FROM 150 to 151-----" << std::endl << std::endl;
    // try
    // {
    //     Bureaucrat  tom("Tom", 150);
    //     std::cout << tom << std::endl;
    //     tom.decrementGrade();
    //     std::cout << tom << std::endl;
    // }
    // catch (std::exception & e)
    // {
    //     std::cerr << e.what() << std::endl;
    // }
    // std::cout << std::endl << "-----DECREMENT GRADE FROM 1 to 0-----" << std::endl << std::endl;
    // try
    // {
    //     Bureaucrat  tom("Tom", 1);
    //     std::cout << tom << std::endl;
    //     tom.incrementGrade();
    //     std::cout << tom << std::endl;
    // }
    // catch (std::exception & e)
    // {
    //     std::cerr << e.what() << std::endl;
    // }
    // std::cout << std::endl << "-----DECREMENT GRADE FROM 2 to 1-----" << std::endl << std::endl;
    // try
    // {
    //     Bureaucrat  tom("Tom", 2);
    //     std::cout << tom << std::endl;
    //     tom.incrementGrade();
    //     std::cout << tom << std::endl;
    // }
    // catch (std::exception & e)
    // {
    //     std::cerr << e.what() << std::endl;
    // }
    // std::cout << std::endl << "-----USING DEFAULT CONTRUCTOR-----" << std::endl << std::endl;
    // try
    // {
    //     Bureaucrat  tom;
    //     std::cout << tom << std::endl;
    //     tom.incrementGrade();
    //     std::cout << tom << std::endl;
    // }
    // catch (std::exception & e)
    // {
    //     std::cerr << e.what() << std::endl;
    // }
    // std::cout << std::endl << "-----USING COPY CONTRUCTOR-----" << std::endl << std::endl;
    // try
    // {
    //     Bureaucrat  tom("Tom", 1);
    //     Bureaucrat  sam(tom);
    //     std::cout << tom << std::endl;
    //     std::cout << sam << std::endl;
    //     tom.incrementGrade();
    //     std::cout << tom << std::endl;
    // }
    // catch (std::exception & e)
    // {
    //     std::cerr << e.what() << std::endl;
    // }
    // std::cout << std::endl << "-----USING COPY ASSIGNMENT OPERATOR-----" << std::endl << std::endl;
    // try
    // {
    //     Bureaucrat  tom("Tom", 1);
    //     Bureaucrat  sam = tom;
    //     std::cout << tom << std::endl;
    //     std::cout << sam << std::endl;
    //     tom.incrementGrade();
    //     std::cout << tom << std::endl;
    // }
    // catch (std::exception & e)
    // {
    //     std::cerr << e.what() << std::endl;
    // }




    // std::cout << std::endl << "-----TRYING TO EXECUTE UNSIGNED FORM-----" << std::endl << std::endl;
    // try
    // {
    //     Bureaucrat  tom("Tom", 20);

    //     std::cout << tom << std::endl;

    //     ShrubberyCreationForm   shrub;
    //     shrub.execute(tom);
    // }
    // catch(const std::exception& e)
    // {
    //     std::cerr << e.what() << std::endl;
    // }
    // std::cout << std::endl << "-----TRYING TO EXECUTE SIGNED FORM-----" << std::endl << std::endl;
    // try
    // {
    //     Bureaucrat  tom("Tom", 20);

    //     std::cout << tom << std::endl;

    //     ShrubberyCreationForm   shrub("home");
    //     shrub.beSigned(tom);
    //     shrub.execute(tom);
    // }
    // catch(const std::exception& e)
    // {
    //     std::cerr << e.what() << std::endl;
    // }
    std::cout << std::endl << "-----TRYING TO EXECUTE USING executeForm()----" << std::endl << std::endl;
    try
    {
        Bureaucrat  tom("Tom", 2); // use different bureaucrats with different grades to test different forms

        std::cout << tom << std::endl;

        ShrubberyCreationForm   shrub("home");
        RobotomyRequestForm     robo("Tom");
        PresidentialPardonForm  pardon("Tom");

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