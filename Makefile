NAME        := libftprintf.a

CC          := cc
CFLAGS      := -Wall -Wextra -Werror
AR          := ar rcs
RM          := rm -rf

SRC_DIR     := src
OBJ_DIR     := obj
LIBFT_DIR   := libft
LIBFT_A     := $(LIBFT_DIR)/libft.a

INCLUDES    := -I./libraries -I$(LIBFT_DIR)

SRCS        := $(SRC_DIR)/ft_printf.c \
               $(SRC_DIR)/ft_print_char.c \
               $(SRC_DIR)/ft_print_hex.c \
               $(SRC_DIR)/ft_print_nbr.c \
               $(SRC_DIR)/ft_print_ptr.c \
               $(SRC_DIR)/ft_print_str.c \
               $(SRC_DIR)/ft_print_unbr.c \
               $(SRC_DIR)/ft_putchar_count.c \
               $(SRC_DIR)/ft_putnbr_base_count.c \
               $(SRC_DIR)/ft_putstr_count.c

OBJS        := $(SRCS:$(SRC_DIR)/%.c=$(OBJ_DIR)/%.o)

all: $(NAME)

$(LIBFT_A):
	@$(MAKE) -C $(LIBFT_DIR)

$(NAME): $(LIBFT_A) $(OBJS)
	@cp $(LIBFT_A) $(NAME)
	@$(AR) $(NAME) $(OBJS)

$(OBJ_DIR)/%.o: $(SRC_DIR)/%.c | $(OBJ_DIR)
	@$(CC) $(CFLAGS) $(INCLUDES) -c $< -o $@

$(OBJ_DIR):
	@mkdir -p $(OBJ_DIR)

clean:
	@$(MAKE) -C $(LIBFT_DIR) clean
	@$(RM) $(OBJ_DIR)

fclean: clean
	@$(MAKE) -C $(LIBFT_DIR) fclean
	@$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re