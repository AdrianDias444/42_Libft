NAME = libft.a

SOURCES = (wildcard /*.c)

CC = cc

CFLAGS = -Wall -Wextra -Werror

OBJECTS = $(SOURCES:%.c=%.o)

COMPRESS = ar rcs

RM = rm -f

all: $(NAME)


$(NAME): $(OBJECTS)
	$(COMPRESS) $(NAME) $(OBJECTS)
	ranlib $(NAME)

clean:
	$(RM) $(OBJECTS)

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re
