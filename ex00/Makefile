NAME = megaphone

SRC = megaphone.cpp

OBJECT = $(SRC:.cpp=.o)

CC = c++
CFLAGS = -Wall -Wextra -Werror

all : $(NAME)

$(NAME): $(SRC)
	$(CC) $(CFLAGS) $(SRC) -o $(NAME)

clean:
	rm -rf $(OBJECT)

fclean: clean
	rm -rf $(NAME)

re: fclean all

.PHONY: all clean fclean re