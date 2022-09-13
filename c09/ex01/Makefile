
NOM = libft.a
INCS = includes
SRC = srcs/ft_putchar.c srcs/ft_swap.c srcs/ft_putstr.c srcs/ft_strlen.c srcs/ft_strcmp.c
OBJS = $(SRC:.c=.o)
CC = gcc
RM = rm -f
CFLAGS = -Wall -Wextra -Werror

%.o: %.c		
		$(CC) $(CFLAGS) -c $< -o $@ -I $(INCS)

$(NOM): $(OBJS)
		ar rcs $(NOM) $(OBJS)

all: $(NOM)

clean:
	$(RM) $(OBJS)

fclean:	clean
	$(RM) $(NOM)

re:	fclean all