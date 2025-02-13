/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marshaky <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/11 20:07:05 by marshaky          #+#    #+#             */
/*   Updated: 2025/02/14 03:52:39 by marshaky         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_is_argument(int c)
{
	return (c == 'c' || c == 's' || c == '%' || c == 'd' || c == 'i' \
			|| c == 'p' || c == 'x' || c == 'X' || c == 'u');
}

int	ft_formats(va_list args, char specifier)
{
	if (specifier == 'c')
		return (ft_print_char(args));
	else if (specifier == 's')
		return (ft_print_string(args));
	else if (specifier == 'd' || specifier == 'i')
		return (ft_print_decimal(args));
	else if (specifier == 'p')
		return (ft_print_pointer(args));
	else if (specifier == 'u')
		return (ft_print_unsigned_decimal(args));
	else if (specifier == 'x')
		return (ft_print_hex(args, 0));
	else if (specifier == 'X')
		return (ft_print_hex(args, 1));
	else if (specifier == '%')
		return (ft_print_percent());
	return (0);
}

int	ft_printf(const char *prm, ...)
{
	va_list	args;
	int		len;

	len = 0;
	va_start(args, prm);
	while (*prm)
	{
		if (*prm == '%')
		{
			prm++;
			if (ft_is_argument(*prm))
				len += ft_formats(args, *prm);
			else
				len += ft_print_percent();
		}
		else
			len += ft_putchar(*prm);
		prm++;
	}
	va_end(args);
	return (len);
}
