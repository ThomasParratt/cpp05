#include "Bureaucrat.hpp"
#include "Form.hpp"

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

    Bureaucrat  tom("Tom", 20);
    Form    Form_1(50, 50);

    std::cout << tom << std::endl;
    std::cout << Form_1 << std::endl;
    Form_1.beSigned(tom);
    Form_1.signForm(tom);
}