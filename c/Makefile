NAME = Coleen Grace Sully
SRC = Coleen.c Grace.c Sully.c
OBJ= $(SRC:.c=.o)

%.o: %.c	clang -o $@ -c $< -Wall -Wextra -Werror

all: $(NAME)

$(NAME): $(OBJ)
	@clang -Wall -Wextra -Werror -o Coleen Coleen.o
	@clang -Wall -Wextra -Werror -o Grace Grace.o
	@clang -Wall -Wextra -Werror -o Sully Sully.o

clean:
	rm -f $(OBJ)

fclean:
	rm -f $(NAME) $(OBJ) Sully_*

re: fclean all

.PHONY: all clean fclean re
