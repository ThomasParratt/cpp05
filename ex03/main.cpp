#include "Bureaucrat.hpp"
#include "AForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.cpp"
#include "Intern.hpp"

int main(void)
{
    std::cout << std::endl << "----TRYING TO CREATE NON-EXISTENT FORM----" << std::endl << std::endl;
    {
        AForm*   shrub = nullptr;
        try
        {
            Bureaucrat  b1("b1", 146);
            Intern      someRandomIntern;
            AForm*      shrub;

            std::cout << b1 << std::endl;

            shrub = someRandomIntern.makeForm("WrongForm", "home");
        
            std::cout << *shrub << std::endl;
            shrub->beSigned(b1);
            std::cout << *shrub << std::endl;
            shrub->signForm(b1);
            b1.executeForm(*shrub);
            delete shrub;
        }
        catch(const std::exception& e)
        {
            std::cerr << e.what() << std::endl;
            delete shrub;
        }
    }
    std::cout << std::endl << "----BUREAUCRAT GRADE TOO LOW TO SIGN SHRUBBERY----" << std::endl << std::endl;
    {
        AForm*   shrub = nullptr;
        try
        {
            Bureaucrat  b1("b1", 146);
            Intern      someRandomIntern;

            std::cout << b1 << std::endl;

            shrub = someRandomIntern.makeForm("ShrubberyCreationForm", "home");

            std::cout << *shrub << std::endl;
            shrub->beSigned(b1);
            std::cout << *shrub << std::endl;
            shrub->signForm(b1);
            b1.executeForm(*shrub);
            delete shrub;
        }
        catch(const std::exception& e)
        {
            std::cerr << e.what() << std::endl;
            delete shrub;
        }
    }
    std::cout << std::endl << "----BUREAUCRAT GRADE TOO LOW TO EXECUTE SHRUBBERY----" << std::endl << std::endl;
    {
        AForm*   shrub = nullptr;
        try
        {
            Bureaucrat  b1("b1", 145);
            Intern      someRandomIntern;

            std::cout << b1 << std::endl;

            shrub = someRandomIntern.makeForm("ShrubberyCreationForm", "home");

            std::cout << *shrub << std::endl;
            shrub->beSigned(b1);
            std::cout << *shrub << std::endl;
            shrub->signForm(b1);
            b1.executeForm(*shrub);
            delete shrub;
        }
        catch(const std::exception& e)
        {
            std::cerr << e.what() << std::endl;
            delete shrub;
        }
    }
    std::cout << std::endl << "----EXECUTE SHRUBBERY----" << std::endl << std::endl;
    {
        AForm*   shrub = nullptr;
        try
        {
            Bureaucrat  b1("b1", 137);
            Intern      someRandomIntern;

            std::cout << b1 << std::endl;

            shrub = someRandomIntern.makeForm("ShrubberyCreationForm", "home");

            std::cout << *shrub << std::endl;
            shrub->beSigned(b1);
            std::cout << *shrub << std::endl;
            shrub->signForm(b1);
            b1.executeForm(*shrub);
            delete shrub;
        }
        catch(const std::exception& e)
        {
            std::cerr << e.what() << std::endl;
            delete shrub;
        }
    }
    std::cout << std::endl << "----BUREAUCRAT GRADE TOO LOW TO SIGN ROBOTOMY----" << std::endl << std::endl;
    {
        AForm*   robotomy = nullptr;
        try
        {
            Bureaucrat  b1("b1", 73);
            Intern      someRandomIntern;

            std::cout << b1 << std::endl;

            robotomy = someRandomIntern.makeForm("RobotomyRequestForm", "Bender");

            std::cout << *robotomy << std::endl;
            robotomy->beSigned(b1);
            std::cout << *robotomy << std::endl;
            robotomy->signForm(b1);
            b1.executeForm(*robotomy);
            delete robotomy;
        }
        catch(const std::exception& e)
        {
            std::cerr << e.what() << std::endl;
            delete robotomy;
        }
    }
    std::cout << std::endl << "----BUREAUCRAT GRADE TOO LOW TO EXECUTE ROBOTOMY----" << std::endl << std::endl;
    {
        AForm*   robotomy = nullptr;
        try
        {
            Bureaucrat  b1("b1", 72);
            Intern      someRandomIntern;

            std::cout << b1 << std::endl;

            robotomy = someRandomIntern.makeForm("RobotomyRequestForm", "Bender");

            std::cout << *robotomy << std::endl;
            robotomy->beSigned(b1);
            std::cout << *robotomy << std::endl;
            robotomy->signForm(b1);
            b1.executeForm(*robotomy);
            delete robotomy;
        }
        catch(const std::exception& e)
        {
            std::cerr << e.what() << std::endl;
            delete robotomy;
        }
    }
    std::cout << std::endl << "----EXECUTE ROBOTOMY----" << std::endl << std::endl;
    {
        AForm*   robotomy = nullptr;
        try
        {
            Bureaucrat  b1("b1", 45);
            Intern      someRandomIntern;

            std::cout << b1 << std::endl;

            robotomy = someRandomIntern.makeForm("RobotomyRequestForm", "Bender");

            std::cout << *robotomy << std::endl;
            robotomy->beSigned(b1);
            std::cout << *robotomy << std::endl;
            robotomy->signForm(b1);
            b1.executeForm(*robotomy);
            delete robotomy;
        }
        catch(const std::exception& e)
        {
            std::cerr << e.what() << std::endl;
            delete robotomy;
        }
    }
    std::cout << std::endl << "----BUREAUCRAT GRADE TOO LOW TO SIGN PARDON----" << std::endl << std::endl;
    {
        AForm*   pardon = nullptr;
        try
        {
            Bureaucrat  b1("b1", 26);
            Intern      someRandomIntern;

            std::cout << b1 << std::endl;

            pardon = someRandomIntern.makeForm("PresidentialPardonForm", "Bill");

            std::cout << *pardon << std::endl;
            pardon->beSigned(b1);
            std::cout << *pardon << std::endl;
            pardon->signForm(b1);
            b1.executeForm(*pardon);
            delete pardon;
        }
        catch(const std::exception& e)
        {
            std::cerr << e.what() << std::endl;
            delete pardon;
        }
    }
    std::cout << std::endl << "----BUREAUCRAT GRADE TOO LOW TO EXECUTE PARDON----" << std::endl << std::endl;
    {
        AForm*   pardon = nullptr;
        try
        {
            Bureaucrat  b1("b1", 25);
            Intern      someRandomIntern;

            std::cout << b1 << std::endl;

            pardon = someRandomIntern.makeForm("PresidentialPardonForm", "Bill");

            std::cout << *pardon << std::endl;
            pardon->beSigned(b1);
            std::cout << *pardon << std::endl;
            pardon->signForm(b1);
            b1.executeForm(*pardon);
            delete pardon;
        }
        catch(const std::exception& e)
        {
            std::cerr << e.what() << std::endl;
            delete pardon;
        }
    }
    std::cout << std::endl << "----EXECUTE PARDON----" << std::endl << std::endl;
    {
        AForm*   pardon = nullptr;
        try
        {
            Bureaucrat  b1("b1", 5);
            Intern      someRandomIntern;

            std::cout << b1 << std::endl;

            pardon = someRandomIntern.makeForm("PresidentialPardonForm", "Bill");

            std::cout << *pardon << std::endl;
            pardon->beSigned(b1);
            std::cout << *pardon << std::endl;
            pardon->signForm(b1);
            b1.executeForm(*pardon);
            delete pardon;
        }
        catch(const std::exception& e)
        {
            std::cerr << e.what() << std::endl;
            delete pardon;
        }
    }
}
    