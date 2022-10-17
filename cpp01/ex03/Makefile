NAME = viol

src = main.cpp Weapon.cpp HumanA.cpp HumanB.cpp

flags = -Wall -Wextra -Werror -std=c++98

hd = Weapon.hpp HumanB.hpp HumanA.hpp

c = c++

all: $(NAME)

$(NAME): $(src) $(hd)
	$(c) $(flags) $(src) -o $(NAME)

clean:
	rm -rf $(NAME)

fclean: clean

re: fclean all