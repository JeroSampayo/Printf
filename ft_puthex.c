/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puthex.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmiras-s <jmiras-s@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/14 22:23:16 by jmiras-s          #+#    #+#             */
/*   Updated: 2023/03/15 12:29:03 by jmiras-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <printf.h>

int	ft_puthex(unsigned int n, const char *base, int i)
{
	if (n >= 16)
		i = ft_puthex(n / 16, base, i);
		i = ft_putchar(base[n % 16], i);
	return (i);
}
