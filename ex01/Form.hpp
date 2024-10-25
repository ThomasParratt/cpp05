#ifndef AForm_HPP
# define AForm_HPP

# include <iostream>
# include "Bureaucrat.hpp"

class AForm
{
    private:
        const std::string   name; //subject specifies it should have a constant name. But this can't be copied
        bool                isSigned;
        const int           gradeToSign;
        const int           gradeToExecute;
    public:
        AForm();
        //AForm(const AForm& obj);
        AForm(int gradeToSign, int gradeToExecute);
        ~AForm();
        //AForm&  operator=(const AForm& obj);
        std::string     getName() const;
        bool            getIsSigned() const;
        int             getGradeToSign() const;
        int             getGradeToExecute() const;

        void            beSigned(Bureaucrat& obj);
        void            signAForm(Bureaucrat& obj);

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

std::ostream&   operator<<(std::ostream& os, const AForm& obj);

#endif