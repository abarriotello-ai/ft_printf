CC      := cc
CFLAGS  := -Wall -Wextra -Werror
AR      := ar rcs
RM      := rm -rf
NAME    := libftprintf.a

SRCS_DIR := srcs
INCLUDES:= -I. -Ilibft -Iincludes


SRCS    := $(SRCS_DIR)/ft_printf.c \
           $(SRCS_DIR)/ft_print_char.c \
           $(SRCS_DIR)/ft_print_hex.c \
           $(SRCS_DIR)/ft_print_nbr.c \
           $(SRCS_DIR)/ft_print_ptr.c \
           $(SRCS_DIR)/ft_print_str.c \
           $(SRCS_DIR)/ft_print_unbr.c \
           $(SRCS_DIR)/ft_putchar_count.c \
           $(SRCS_DIR)/ft_putnbr_base_count.c \
           $(SRCS_DIR)/ft_putstr_count.c

OBJS    := $(SRCS:.c=.o)

all: $(NAME)

$(NAME): $(OBJS)
	@$(MAKE) -C libft
	@cp libft/libft.a $(NAME)
	@$(AR) $(NAME) $(OBJS)

%.o: %.c
	@$(CC) $(CFLAGS) $(INCLUDES) -c $< -o $@

clean:
	@$(MAKE) -C libft clean
	@$(RM) $(OBJS)

fclean: clean
	@$(MAKE) -C libft fclean
	@$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re