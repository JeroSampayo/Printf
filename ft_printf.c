/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmiras-s <jmiras-s@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/09 14:42:58 by jmiras-s          #+#    #+#             */
/*   Updated: 2023/03/15 12:28:37 by jmiras-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"

int	ft_printf(const char *str, ...)
{
	va_list	args;

	int	i;

	va_start(args, str);

	i = 0;
	while (*str && i != -1)
	{
		if (*str == '%' && *(str +1) != '%')
		{
		i = ft_flag(++str, args, i);
		}
		else
		{
			i = ft_putchar(*str, i);
		}
		str++;
	}
	va_end(args);
	return (i);
}
