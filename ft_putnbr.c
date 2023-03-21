/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmiras-s <jmiras-s@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/14 22:25:04 by jmiras-s          #+#    #+#             */
/*   Updated: 2023/03/15 12:29:34 by jmiras-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <printf.h>

int	ft_putnbr(int n, int i)
{
	if (n == -2147483648)
		i = ft_putstr("-2147483648", i);
	else if (n < 0)
	{
		i = ft_putchar('-', i);
		i = ft_putnbr(-n, i);
	}
	else if (n >= 10)
	{
		i = ft_putnbr(n / 10, i);
		i = ft_putchar(n % 10 + '0', i);
	}
	else
		i = ft_putchar(n + '0', i);
	return (i);
}
