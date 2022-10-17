NAME = ScavTrap

src = main.cpp ClapTrap.cpp ScavTrap.cpp

hd = ClapTrap.hpp ScavTrap.hpp

c = c++

flags = -Wall -Wextra -Werror -std=c++98

all:$(NAME)

$(NAME):$(src) $(hd)
	$(c) $(flags) $(src) -o $(NAME)

clean:
	rm -rf $(NAME)

fclean:clean

re:fclean all