/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puthexlower.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omahdiou <omahdiou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/25 14:25:56 by omahdiou          #+#    #+#             */
/*   Updated: 2022/11/25 14:28:23 by omahdiou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_puthexlower(unsigned long nb)
{
	int		i;
	char	*x;

	x = "0123456789abcdef";
	i = 0;
	if (nb < 16)
	{
		i += ft_putchar(x[nb]);
	}
	else
	{
		i += ft_puthexlower(nb / 16);
		i += ft_putchar(x[nb % 16]);
	}
	return (i);
}
