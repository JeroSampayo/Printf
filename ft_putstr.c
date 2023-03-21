/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmiras-s <jmiras-s@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/14 22:22:34 by jmiras-s          #+#    #+#             */
/*   Updated: 2023/03/15 12:30:26 by jmiras-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <printf.h>

int	ft_putstr(const char *s, int i)
{
	if (!s)
		return (write(1, "(null)", 6));
	while (*s)
		i = ft_putchar(*s++, i);
	return (i);
}
