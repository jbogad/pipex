# NAME = pipex
# CC = clang
# CFLAGS = -Wall -Wextra -Werror

# LIBFT_DIR = libft
# LIBFT = $(LIBFT_DIR)/libft.a

# HEADER = pipex.h
# SRC = pipex.c pipex_utils.c
# OBJ = $(SRC:.c=.o)

# # Colores
# GREEN = \033[1;32m
# YELLOW = \033[1;33m
# RED = \033[1;31m
# BLUE = \033[1;34m
# NC = \033[0m

# all: $(LIBFT) $(NAME)

# $(LIBFT):
# 	@echo "$(BLUE)=== Building Libft ===$(NC)"
# 	@$(MAKE) -C $(LIBFT_DIR)

# $(NAME): $(OBJ) $(LIBFT)
# 	@echo "$(GREEN)"
# 	@echo ""
# 	@echo " ██████╗ ██╗██████╗ ███████╗██╗  ██╗ "
# 	@echo " ██╔══██╗██║██╔══██╗██╔════╝╚██╗██╔╝ "
# 	@echo " ██████╔╝██║██████╔╝█████╗   ╚███╔╝ "
# 	@echo " ██╔═══╝ ██║██╔═══╝ ██╔══╝   ██╔██╗ "
# 	@echo " ██║     ██║██║     ███████╗██╔╝ ██╗ "
# 	@echo " ╚═╝     ╚═╝╚═╝     ╚══════╝╚═╝  ╚═╝ "
# 	@echo ""
# 	@echo "   === Compiling PIPEX ===$(NC)"
# 	@$(CC) $(CFLAGS) -o $(NAME) $(OBJ) -L$(LIBFT_DIR) -lft
# 	@echo "$(GREEN)✓ PIPEX successfully compiled!$(NC)"

# %.o: %.c $(HEADER)
# 	@printf "$(YELLOW)Generating objects... %-20.20s$(NC)\r" $@
# 	@$(CC) $(CFLAGS) -c $< -o $@

# clean:
# 	@echo "$(RED)=== Cleaning Objects ==="
# 	@echo "Removing: $(OBJ)$(NC)"
# 	@rm -f $(OBJ)
# 	@$(MAKE) -C $(LIBFT_DIR) clean
# 	@echo "$(RED)✓ Objects cleaned!$(NC)"

# fclean: clean
# 	@echo "$(RED)=== Cleaning Executable ==="
# 	@echo "Removing: $(NAME)$(NC)"
# 	@rm -f $(NAME)
# 	@$(MAKE) -C $(LIBFT_DIR) fclean
# 	@echo "$(RED)✓ Full clean completed!$(NC)"

# re: fclean all

# .PHONY: all clean fclean re

NAME = pipex
CC = clang
CFLAGS = -Wall -Wextra -Werror

LIBFT_DIR = libft
LIBFT = $(LIBFT_DIR)/libft.a

HEADER = pipex.h
SRC = pipex.c pipex_utils.c
OBJ = $(SRC:.c=.o)

# Colores
GREEN = \033[1;32m
YELLOW = \033[1;33m
RED = \033[1;31m
BLUE = \033[1;34m
NC = \033[0m

all: $(LIBFT) $(NAME)

$(LIBFT):
	@echo "$(BLUE)=== Building Libft ===$(NC)"
	@$(MAKE) -C $(LIBFT_DIR)

$(NAME): $(OBJ) $(LIBFT)
	@echo "$(GREEN)"
	@echo "PPPPPPPPPPPPPPPPP      IIIIIIIIII      PPPPPPPPPPPPPPPPP      EEEEEEEEEEEEEEEEEEEE      XXXXXXX       XXXXXXX"
	@echo "P:::::::::::::::P      I::::::::I      P:::::::::::::::P      E::::::::::::::::::::E      X:::::X       X:::::X"
	@echo "P::::::PPPPPP:::::P     I::::I         P::::::PPPPPP:::::P     E::::::EEEEEEEE:::::E      X:::::X       X:::::X"
	@echo "PP:::::P     P:::::P    I::::I         PP:::::P     P:::::P    EE:::::E       EEEEEE      X::::::X     X::::::X"
	@echo "  P::::P     P:::::P    I::::I           P::::P     P:::::P      E:::::E                    X:::::X   X:::::X  "
	@echo "  P::::P     P:::::P    I::::I           P::::P     P:::::P      E:::::E                    X:::::X X:::::X   "
	@echo "  P::::PPPPPP:::::P     I::::I           P::::PPPPPP:::::P       E::::::EEEEEEEEEE          X:::::X:::::X    "
	@echo "  P:::::::::::::PP      I::::I           P:::::::::::::PP        E:::::::::::::::E           X:::::::::X     "
	@echo "  P::::PPPPPPPPP        I::::I           P::::PPPPPPPPP          E:::::::::::::::E           X:::::::::X     "
	@echo "  P::::P                I::::I           P::::P                  E::::::EEEEEEEEEE          X:::::X:::::X    "
	@echo "  P::::P                I::::I           P::::P                  E:::::E                  X:::::X X:::::X   "
	@echo "  P::::P                I::::I           P::::P                  E:::::E                  X:::::X   X:::::X  "
	@echo "PP::::::PP            I::::I         PP::::::PP              EE::::::EEEEEEEE:::::E      X::::::X     X::::::X"
	@echo "P::::::::P            I::::I         P::::::::P              E::::::EEEEEEEE:::::E      X:::::X       X:::::X"
	@echo "P::::::::P            I::::I         P::::::::P              E::::::::::::::::::::E      X:::::X       X:::::X"
	@echo "PPPPPPPPPP            IIIIIIIIII     PPPPPPPPPP              EEEEEEEEEEEEEEEEEEEEE      XXXXXXX       XXXXXXX"
	@echo ""
	@echo "   === Compiling PIPEX ===$(NC)"
	@$(CC) $(CFLAGS) -o $(NAME) $(OBJ) -L$(LIBFT_DIR) -lft
	@echo "$(GREEN)✓ PIPEX successfully compiled!$(NC)"

%.o: %.c $(HEADER)
	@printf "$(YELLOW)Generating objects... %-20.20s$(NC)\r" $@
	@$(CC) $(CFLAGS) -c $< -o $@

clean:
	@echo "$(RED)=== Cleaning Objects ==="
	@echo "Removing: $(OBJ)$(NC)"
	@rm -f $(OBJ)
	@$(MAKE) -C $(LIBFT_DIR) clean
	@echo "$(RED)✓ Objects cleaned!$(NC)"

fclean: clean
	@echo "$(RED)=== Cleaning Executable ==="
	@echo "Removing: $(NAME)$(NC)"
	@rm -f $(NAME)
	@$(MAKE) -C $(LIBFT_DIR) fclean
	@echo "$(RED)✓ Full clean completed!$(NC)"

re: fclean all

.PHONY: all clean fclean re