#ifndef ROBOTOMYREQUESTFORM_HPP
# define ROBOTOMYREQUESTFORM_HPP

# include <iostream>
# include "AForm.hpp"

class RobotomyRequestForm : public AForm
{
    private:
        std::string target;
    public:
        RobotomyRequestForm();
        //RobotomyRequestForm(const RobotomyRequestForm& obj);
        RobotomyRequestForm(std::string target);
        ~RobotomyRequestForm();
        //RobotomyRequestForm&  operator=(const RobotomyRequestForm& obj);

        int    execute(Bureaucrat const & executor) const;
};

#endif