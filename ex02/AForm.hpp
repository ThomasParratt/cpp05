#ifndef AForm_HPP
# define AForm_HPP

# include <iostream>
# include "Bureaucrat.hpp"

class Bureaucrat;

class AForm // this needs to be made into an abstract class
{
    protected:
        const std::string   name; //subject specifies it should have a constant name. But this can't be copied
        bool                isSigned;
        int                 gradeToSign;    //should this be const?
        int                 gradeToExecute; //should this be const?
    public:
        AForm();
        //AForm(const AForm& obj);
        AForm(int gradeToSign, int gradeToExecute);
        virtual ~AForm();
        //AForm&  operator=(const AForm& obj);
        std::string     getName() const;
        bool            getIsSigned() const;
        int             getGradeToSign() const;
        int             getGradeToExecute() const;

        void            beSigned(Bureaucrat& obj);
        void            signAForm(Bureaucrat& obj);

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