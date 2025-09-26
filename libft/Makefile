CC = cc
CFLAGS = -Wall -Wextra -Werror -I.
SRCS = $(filter-out main.c, $(wildcard *.c))
OBJS = $(SRCS:.c=.o)
NAME = libft.a
RM = rm -f
AR = ar crs

all: $(NAME)

$(NAME): $(OBJS)
	$(AR) $(NAME) $(OBJS)

%.o: %.c libft.h
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	$(RM) $(OBJS)

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re