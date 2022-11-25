/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omahdiou <omahdiou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/20 23:01:19 by omahdiou          #+#    #+#             */
/*   Updated: 2022/11/25 14:26:56 by omahdiou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <unistd.h>
# include <stdarg.h>

int	ft_putchar(char c);
int	ft_putnbr(int nb);
int	ft_putnbru(unsigned int nb);
int	ft_putstr(char *s);
int	ft_puthexlower(unsigned long nb);
int	ft_puthexuper(unsigned int nb);
int	ft_printf(const char *fmt, ...);

#endif