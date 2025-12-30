NAME        := libftprintf.a

CC          := cc
AR          := ar rcs
RM          := rm -f

CFLAGS      := -Wall -Wextra -Werror
CPPFLAGS    := -I. -Ilibft

LIBFT_DIR   := libft
LIBFT_A     := $(LIBFT_DIR)/libft.a

SRCS        := src/ft_printf.c \
               src/ft_print_char.c \
               src/ft_print_hex.c \
               src/ft_print_nbr.c \
               src/ft_print_ptr.c \
               src/ft_print_str.c \
               src/ft_print_unbr.c \
               src/ft_putchar_count.c \
               src/ft_putnbr_base_count.c \
               src/ft_putstr_count.c

OBJS        := $(SRCS:.c=.o)

all: $(NAME)

$(LIBFT_A):
	@$(MAKE) -C $(LIBFT_DIR)

$(NAME): $(LIBFT_A) $(OBJS)
	@cp $(LIBFT_A) $(NAME)
	@$(AR) $(NAME) $(OBJS)

%.o: %.c ft_printf.h
	$(CC) $(CPPFLAGS) $(CFLAGS) -c $< -o $@

clean:
	@$(RM) $(OBJS)
	@$(MAKE) -C $(LIBFT_DIR) clean

fclean: clean
	@$(RM) $(NAME)
	@$(MAKE) -C $(LIBFT_DIR) fclean

re: fclean all

.PHONY: all clean fclean re