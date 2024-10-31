#ifndef AFORM_HPP
# define AFORM_HPP

# include <iostream>
# include "Bureaucrat.hpp"

class Bureaucrat;

class AForm
{
    protected:
        const std::string   name;
        bool                isSigned;
        const int           gradeToSign;
        const int           gradeToExecute;
    public:
        AForm();
        AForm(const AForm& obj);
        AForm(std::string name, int gradeToSign, int gradeToExecute);
        virtual ~AForm();
        AForm&  operator=(const AForm& obj);
        std::string     getName() const;
        bool            getIsSigned() const;
        int             getGradeToSign() const;
        int             getGradeToExecute() const;

        void            beSigned(Bureaucrat& obj);
        void            signForm(Bureaucrat& obj);

        virtual int    execute(Bureaucrat const & executor) const = 0;

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