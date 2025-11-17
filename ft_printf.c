/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abarrio <abarrio@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/17 18:41:50 by abarrio           #+#    #+#             */
/*   Updated: 2025/11/17 19:12:32 by abarrio          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_print_arg(const char *format, va_list arg)
{
	int	i;
	int	count;

	i = 0;
	count = 0;
	while (format[i])
	{
		if (format[i] == '%')
		{
			i++;
			count += ft_dispatch(format[i], arg);
		}
		else
			count += ft_putchar_count(format[i]);
		if (format[i] != '\0')
			i++;
	}
	return (count);
}

int	ft_printf(const char *format, ...)
{
	va_list	arg;
	int		count;

	va_star(arg, format);
	count = ft_printf_arg(format, arg);
	va_end(arg);
	return (count);
}
