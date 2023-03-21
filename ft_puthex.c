/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puthex.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmiras-s <jmiras-s@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/14 22:23:16 by jmiras-s          #+#    #+#             */
/*   Updated: 2023/03/21 15:47:37 by jmiras-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_puthex(unsigned long n, const char *base)
{
	int	i;

	i = 0;
	if (n >= 16)
	{
		i = ft_puthex(n / 16, base);
		if (i == -1)
			return (-1);
	}
	if (ft_putchar(base[n % 16]) < 0)
		return (-1);
	i++;
	return (i);
}
