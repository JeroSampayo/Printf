/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putptr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmiras-s <jmiras-s@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/14 22:24:07 by jmiras-s          #+#    #+#             */
/*   Updated: 2023/03/15 12:30:04 by jmiras-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <printf.h>

int	ft_putptr(void *ptr, int i)
{
	i = ft_putstr("0x", i);
	i = ft_puthex((unsigned long long)ptr, "0123456789abcdef", i);
	return (i);
}
