NAME = bsp

SRC = Fixed.cpp main.cpp Point.cpp bsp.cpp

OBJECT = $(SRC:.cpp=.o)

CC = c++
CPPFLAGS =  -Wall -Wextra -Werror -std=c++98 

all : $(NAME)

$(NAME): $(SRC)
	$(CC) $(CPPFLAGS) $(SRC) -o $(NAME)

clean:
	rm -rf $(OBJECT)

fclean: clean
	rm -rf $(NAME)

re: fclean all

.PHONY: all clean fclean re	