/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmiras-s <jmiras-s@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/09 14:42:58 by jmiras-s          #+#    #+#             */
/*   Updated: 2023/03/21 17:24:28 by jmiras-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <stdio.h>

static t_vals	ft_init_vals(void)
{
	t_vals	vals;

	vals.count = 0;
	vals.ecount = 0;
	return (vals);
}

int	ft_printf(const char *str, ...)
{
	t_vals	vals;

	vals = ft_init_vals();
	va_start(vals.args, str);
	while (vals.count != -1 && *str)
	{
		if (*str == '%' && *(str + 1))
		{
			vals.ecount = ft_flag(++str, vals.args);
			if (vals.ecount == -1)
				vals.count = -1;
			else
				vals.count += vals.ecount;
		}
		else
		{
			if (ft_putchar(*str) == -1)
				vals.count = -1;
			else
				vals.count++;
		}
		str++;
	}
	va_end(vals.args);
	return (vals.count);
}
