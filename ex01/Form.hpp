#ifndef FORM_HPP
# define FORM_HPP

# include <iostream>
# include "Bureaucrat.hpp"

class Form
{
    private:
        const std::string   name; //subject specifies it should have a constant name. But this can't be copied
        bool                isSigned;
        const int           gradeToSign;
        const int           gradeToExecute;
    public:
        Form();
        //Form(const Form& obj);
        Form(int gradeToSign, int gradeToExecute);
        ~Form();
        //Form&  operator=(const Form& obj);
        std::string     getName() const;
        bool            getIsSigned() const;
        int             getGradeToSign() const;
        int             getGradeToExecute() const;

        void            beSigned(Bureaucrat& obj);
        void            signForm(Bureaucrat& obj);

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

std::ostream&   operator<<(std::ostream& os, const Form& obj);

#endif