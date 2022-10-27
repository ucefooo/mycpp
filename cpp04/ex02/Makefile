NAME = Animal

src = main.cpp Animal.cpp Brain.cpp Cat.cpp Dog.cpp WrongCat.cpp WrongAnimal.cpp

hd = Animal.hpp Brain.hpp Cat.hpp Dog.hpp WrongCat.hpp WrongAnimal.hpp

flags = -Wall -Wextra -Werror -std=c++98

c = c++

all: $(NAME)

$(NAME): $(src) $(hd)
	$(c) $(flags) $(src) -o $(NAME)

clean:
	rm -rf $(NAME)

fclean: clean

re: fclean all