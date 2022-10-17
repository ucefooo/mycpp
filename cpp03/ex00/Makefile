NAME = ClarTrap

src = main.cpp ClapTrap.cpp

hd = ClapTrap.hpp

c = c++

flags = -Wall -Wextra -Werror -std=c++98

all:$(NAME)

$(NAME):$(src) $(hd)
	$(c) $(flags) $(src) -o $(NAME)

clean:
	rm -rf $(NAME)

fclean:clean

re:fclean all