NAME = Bureau

src = main.cpp Bureaucrat.cpp Form.cpp ShrubberyCreationForm.cpp RobotomyRequestForm.cpp PresidentialPardonForm.cpp

hd = Bureaucrat.hpp Form.hpp ShrubberyCreationForm.hpp RobotomyRequestForm.hpp PresidentialPardonForm.hpp

flags = -Wall -Wextra -Werror -std=c++98

c = c++

all: $(NAME)

$(NAME): $(src) $(hd)
	$(c) $(flags) $(src) -o $(NAME)

clean:
	rm -rf $(NAME)

fclean: clean

re: fclean all