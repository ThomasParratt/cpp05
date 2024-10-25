#ifndef SHRUBBERYCREATIONFORM_HPP
# define SHRUBBERYCREATIONFORM_HPP

# include <iostream>
# include "AForm.hpp"
# include <fstream>

class ShrubberyCreationForm : public AForm
{
    private:
        std::string target;
    public:
        ShrubberyCreationForm();
        //ShrubberyCreationForm(const ShrubberyCreationForm& obj);
        ShrubberyCreationForm(std::string target);
        ~ShrubberyCreationForm();
        //ShrubberyCreationForm&  operator=(const ShrubberyCreationForm& obj);

        int    execute(Bureaucrat const & executor) const;
};

#endif