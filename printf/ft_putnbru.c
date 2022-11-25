/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbru.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omahdiou <omahdiou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/25 00:30:12 by omahdiou          #+#    #+#             */
/*   Updated: 2022/11/25 14:29:07 by omahdiou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putnbru(unsigned int nb)
{
	int		i;

	i = 0;
	if (nb <= 9)
	{
		i += ft_putchar(nb + 48);
	}
	else
	{
		i += ft_putnbr(nb / 10);
		i += ft_putchar((nb % 10) + '0');
	}
	return (i);
}
