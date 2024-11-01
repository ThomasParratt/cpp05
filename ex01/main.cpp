#include "Bureaucrat.hpp"
#include "Form.hpp"

int main(void)
{
    std::cout << std::endl << "----SIGN FORM----" << std::endl << std::endl;
    try
    {
        Bureaucrat  tom("Tom", 20);
        Form    form_1("Form_1", 50, 50);

        std::cout << tom << std::endl;
        std::cout << form_1 << std::endl;
        form_1.beSigned(tom);
        form_1.signForm(tom);
        std::cout << form_1 << std::endl;
    }
    catch (std::exception & e)
    {
        std::cerr << e.what() << std::endl;
    }
    std::cout << std::endl << "----GRADE TO SIGN TOO LOW----" << std::endl << std::endl;
    try
    {
        Bureaucrat  tom("Tom", 20);
        Form    form_1("Form_1", 151, 50);

        std::cout << tom << std::endl;
        std::cout << form_1 << std::endl;
        form_1.beSigned(tom);
        form_1.signForm(tom);
        std::cout << form_1 << std::endl;
    }
    catch (std::exception & e)
    {
        std::cerr << e.what() << std::endl;
    }
    std::cout << std::endl << "----FORM GRADE TO SIGN TOO HIGH----" << std::endl << std::endl;
    try
    {
        Bureaucrat  tom("Tom", 20);
        Form    form_1("Form_1", 0, 50);

        std::cout << tom << std::endl;
        std::cout << form_1 << std::endl;
        form_1.beSigned(tom);
        form_1.signForm(tom);
        std::cout << form_1 << std::endl;
    }
    catch (std::exception & e)
    {
        std::cerr << e.what() << std::endl;
    }
    std::cout << std::endl << "----FORM GRADE TO EXECUTE TOO LOW----" << std::endl << std::endl;
    try
    {
        Bureaucrat  tom("Tom", 20);
        Form    form_1("Form_1", 50, 151);

        std::cout << tom << std::endl;
        std::cout << form_1 << std::endl;
        form_1.beSigned(tom);
        form_1.signForm(tom);
        std::cout << form_1 << std::endl;
    }
    catch (std::exception & e)
    {
        std::cerr << e.what() << std::endl;
    }
    std::cout << std::endl << "----FORM GRADE TO EXECUTE TOO HIGH----" << std::endl << std::endl;
    try
    {
        Bureaucrat  tom("Tom", 20);
        Form    form_1("Form_1", 50, 0);

        std::cout << tom << std::endl;
        std::cout << form_1 << std::endl;
        form_1.beSigned(tom);
        form_1.signForm(tom);
        std::cout << form_1 << std::endl;
    }
    catch (std::exception & e)
    {
        std::cerr << e.what() << std::endl;
    }
    std::cout << std::endl << "----BUREAUCRAT GRADE TO SIGN TOO LOW----" << std::endl << std::endl;
    try
    {
        Bureaucrat  tom("Tom", 51);
        Form    form_1("Form_1", 50, 40);

        std::cout << tom << std::endl;
        std::cout << form_1 << std::endl;
        form_1.beSigned(tom);
        form_1.signForm(tom);
        std::cout << form_1 << std::endl;
    }
    catch (std::exception & e)
    {
        std::cerr << e.what() << std::endl;
    }
    std::cout << std::endl << "----BUREAUCRAT GRADE TO EXECUTE TOO LOW----" << std::endl << std::endl;
    try
    {
        Bureaucrat  tom("Tom", 41);
        Form    form_1("Form_1", 50, 40);

        std::cout << tom << std::endl;
        std::cout << form_1 << std::endl;
        form_1.beSigned(tom);
        form_1.signForm(tom);
        std::cout << form_1 << std::endl;
    }
    catch (std::exception & e)
    {
        std::cerr << e.what() << std::endl;
    }
}