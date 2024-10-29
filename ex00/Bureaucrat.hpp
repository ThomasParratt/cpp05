#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

# include <iostream>

class Bureaucrat
{
    private:
        const std::string     name; //subject specifies it should have a constant name. But this can't be copied.
        int             grade;
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