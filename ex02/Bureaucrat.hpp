#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

# include <iostream>
# include "AForm.hpp"

class AForm;

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

        void    signForm(AForm& obj);
        void    executeForm(AForm const & form);

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