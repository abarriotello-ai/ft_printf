/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abarrio <abarrio@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/17 17:21:40 by abarrio           #+#    #+#             */
/*   Updated: 2025/11/17 18:54:24 by abarrio          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <unistd.h>
# include <stdlib.h>
# include "libft.h"

int	ft_printf(const char *format, ...);

/* core */
int	ft_printf_arg(const char *format, va_list arg);
int	ft_dispatch(char spec, va_list arg);

/* printers */
int	ft_print_char(int c);
int	ft_print_str(char *s);
int	ft_print_nbr(int n);							// %d %i
int	ft_print_unbr(unsigned int n);					// %u
int	ft_print_hex(unsigned int n, int uppercase);	// %x %X
int	ft_print_ptr(void *ptr);						// %p

/* utils específicos de printf */
int	ft_putchar_count(char c);
int	ft_putstr_count(char *s);
int	ft_putnbr_base_count(unsigned long n, char *base);

#endif
