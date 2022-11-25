/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omahdiou <omahdiou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/22 23:40:31 by omahdiou          #+#    #+#             */
/*   Updated: 2022/11/25 14:26:47 by omahdiou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printf1(char f, va_list pt)
{
	int	i;

	i = 0;
	if (f == 'c')
		i += ft_putchar(va_arg(pt, int));
	else if (f == 's')
		i += ft_putstr(va_arg(pt, char *));
	else if (f == 'p')
	{
		i += write(1, "0x", 2);
		i += ft_puthexlower(va_arg(pt, unsigned long));
	}
	else if (f == 'd')
		i += ft_putnbr(va_arg(pt, int));
	else if (f == 'i')
		i += ft_putnbr(va_arg(pt, int));
	else if (f == 'u')
		i += ft_putnbru(va_arg(pt, unsigned int));
	else if (f == 'x')
		i += ft_puthexlower(va_arg(pt, unsigned int));
	else if (f == 'X')
		i += ft_puthexuper(va_arg(pt, unsigned int));
	else if (f == '%')
		i += write(1, "%", 1);
	return (i);
}

int	ft_printf(const char *c, ...)
{
	va_list	p;
	int		i;
	int		len;

	i = 0;
	len = 0;
	va_start(p, c);
	while (c[i])
	{
		if (c[i] == '%' && c[i + 1] == '\0')
			break ;
		if (c[i] != '%')
			len += ft_putchar(c[i]);
		else if (c[i] == '%')
		{
			len += ft_printf1(c[i + 1], p);
			i++;
		}
		i++;
	}
	va_end(p);
	return (len);
}
