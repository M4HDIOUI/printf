/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puthexuper.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omahdiou <omahdiou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/22 17:34:50 by omahdiou          #+#    #+#             */
/*   Updated: 2022/11/25 14:28:32 by omahdiou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_puthexuper(unsigned int nb)
{
	int		i;
	char	*x;

	x = "0123456789ABCDEF";
	i = 0;
	if (nb < 16)
	{
		i += ft_putchar(x[nb]);
	}
	else
	{
		i += ft_puthexuper(nb / 16);
		i += ft_putchar(x[nb % 16]);
	}
	return (i);
}
