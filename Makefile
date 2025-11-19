NAME    = libftprintf.a
CC      = cc
CFLAGS  = -Wall -Wextra -Werror -I.
AR      = ar rcs
RM      = rm -f

SRCS    = src/ft_printf.c \
          src/ft_print_char.c \
          src/ft_print_hex.c \
          src/ft_print_nbr.c \
          src/ft_print_ptr.c \
          src/ft_print_str.c \
          src/ft_print_unbr.c \
          src/ft_putchar_count.c \
          src/ft_putnbr_base_count.c \
          src/ft_putstr_count.c

OBJS    = $(SRCS:.c=.o)

#	REGLA POR DEFECTO
all: $(NAME)

#	REGLA PARA CONSTRUIR LA LIBRERIA INCORPORANDO LIBFT
$(NAME): $(OBJS)
	@make -C libft
	@cp libft/libft.a $(NAME)
	@$(AR) $(NAME) $(OBJS)

#	REGLA DE COMPILACION DE OBJETOS
%.o: %.c ft_printf.h
	$(CC) $(FLAGS) -I. -Ilibft -c $< -o $@

#	REGLAS DE LIMPIEZA
clean:
	@$(RM) $(OBJS)
	@make -C libft clean

fclean: clean
	@$(RM) $(NAME)
	@make -C libft fclean

re: fclean all

.PHONY: all clean fclean re