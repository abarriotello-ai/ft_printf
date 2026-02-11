/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_count.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abarrio <abarrio@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/18 16:09:14 by abarrio           #+#    #+#             */
/*   Updated: 2025/11/18 17:39:00 by abarrio          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putstr_count(char *s)
{
	int	len;

	if (!s)
		return (0);
	len = (int)ft_strlen(s);
	write(1, s, len);
	return (len);
}
