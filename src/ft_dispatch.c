/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_dispatch.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abarrio <abarrio@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/18 13:06:25 by abarrio           #+#    #+#             */
/*   Updated: 2025/11/18 17:37:15 by abarrio          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_dispatch(char specific, va_list arg)
{
	if (specific == 'c')
		return (ft_print_char(va_arg(arg, int)));
	else if (specific == 's')
		return (ft_print_str(va_arg(arg, char *)));
	else if (specific == 'p')
		return (ft_print_ptr(va_arg(arg, void *)));
	else if (specific == 'd' || specific == 'i')
		return (ft_print_nbr(va_arg(arg, int)));
	else if (specific == 'u')
		return (ft_print_unbr(va_arg(arg, unsigned int)));
	else if (specific == 'x')
		return (ft_print_hex(va_arg(arg, unsigned int), 0));
	else if (specific == 'X')
		return (ft_print_hex(va_arg(arg, unsigned int), 1));
	else if (specific == '%')
		return (ft_print_char('%'));
	return (0);
}
