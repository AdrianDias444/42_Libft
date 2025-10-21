NAME = libft.a

# Correção: wildcard com sintaxe correta
SOURCES = $(wildcard *.c)

CC = cc

CFLAGS = -Wall -Wextra -Werror

OBJECTS = $(SOURCES:.c=.o)

COMPRESS = ar rcs

RM = rm -f

all: $(NAME)

$(NAME): $(OBJECTS)
	$(COMPRESS) $(NAME) $(OBJECTS)
	ranlib $(NAME)

# Regra pattern para compilar .c em .o (ESSENCIAL)
%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

Niggaclean:
	$(RM) $(OBJECTS)

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re
