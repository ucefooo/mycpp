NAME = a.out

src = main.cpp Fixed.cpp Point.cpp bsp.cpp

hd = Fixed.hpp Point.hpp

flags = -Wall -Wextra -Werror -std=c++98

c = c++

all: $(NAME)

$(NAME): $(src) $(hd)
	$(c) $(flags) $(src) -o $(NAME)

clean:
	rm -rf $(NAME)

fclean: clean

re: fclean all