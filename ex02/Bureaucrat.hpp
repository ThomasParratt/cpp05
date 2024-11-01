#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

# include <iostream>
# include "Form.hpp"

class Form;

class Bureaucrat
{
    private:
        const std::string   name;
        int                 grade;
    public:
        Bureaucrat();
        Bureaucrat(const Bureaucrat& obj);
        Bureaucrat(std::string name, int grade);
        ~Bureaucrat();
        Bureaucrat&  operator=(const Bureaucrat& obj);
        std::string     getName() const;
        int             getGrade() const;
        void            incrementGrade();
        void            decrementGrade();

        void    signForm(Form& obj);

        class GradeTooHighException : public std::exception
        {
            public:
                const char* what() const noexcept override;
        };
        class GradeTooLowException : public std::exception
        {
            public:
                const char* what() const noexcept override;
        };
};

std::ostream&   operator<<(std::ostream& os, const Bureaucrat& obj);

#endif