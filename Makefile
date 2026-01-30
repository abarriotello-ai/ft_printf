CC      := cc
CFLAGS  := -Wall -Wextra -Werror
AR      := ar rcs
RM      := rm -rf
NAME    := libftprintf.a

SRC_DIR := src
INCLUDES:= -I. -Ilibft


SRCS    := $(SRC_DIR)/ft_printf.c \
           $(SRC_DIR)/ft_print_char.c \
           $(SRC_DIR)/ft_print_hex.c \
           $(SRC_DIR)/ft_print_nbr.c \
           $(SRC_DIR)/ft_print_ptr.c \
           $(SRC_DIR)/ft_print_str.c \
           $(SRC_DIR)/ft_print_unbr.c \
           $(SRC_DIR)/ft_putchar_count.c \
           $(SRC_DIR)/ft_putnbr_base_count.c \
           $(SRC_DIR)/ft_putstr_count.c

OBJS    := $(SRCS:.c=.o)

all: $(NAME)

$(NAME): $(OBJS)
	$(MAKE) -C libft
	cp libft/libft.a $(NAME)
	$(AR) $(NAME) $(OBJS)

%.o: %.c
	$(CC) $(CFLAGS) $(INCLUDES) -c $< -o $@

clean:
	$(MAKE) -C libft clean
	$(RM) $(OBJS)

fclean: clean
	$(MAKE) -C libft fclean
	$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re