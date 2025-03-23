NAME = pipex

LIBFT_PATH = ./libft/libft.a
CC = gcc
CFLAGS = -Wall -Werror -Wextra

SRCS = pipex.c \
		pipex_utils.c

OBJS = $(SRCS:.c=.o)

RM = rm -f

all: make_lib $(NAME)

make_lib:
	@make -sC ./libft
#	@echo "---- libft reaady ----" 
	
$(NAME): $(OBJS)
	@$(CC) $(CFLAGS) $(OBJS) $(LIBFT_PATH) -o $(NAME)
	@echo $(NAME)": ready to be executed"

clean:
	@$(RM) $(OBJS)
	@$(MAKE) -C ./libft clean --silent

fclean: clean
	@$(RM) $(NAME)
	@$(MAKE) -C ./libft fclean --silent

re: fclean all

.PHONY: all clean fclean re