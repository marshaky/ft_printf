/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_formats.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marshaky <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/11 20:31:51 by marshaky          #+#    #+#             */
/*   Updated: 2025/02/12 01:05:34 by marshaky         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_formats(va_list args, char specifier)
{
	if (specifier == 'c')
		return (ft_char_format(args));
	else if (specifier == 's')
		return (ft_string_format(args));
	else if (specifier == 'd' || specifier == 'i')
		return (ft_decimal_format(args));
	else if (specifier == 'p')
		return (ft_void_pointer_format(args));
	else if (specifier == 'u')
		return (ft_unsigned_decimal_format(args));
	else if (specifier == 'x')
		return (ft_hex_format(args, 0));
	else if (specifier == 'X')
		return (ft_hex_format(args, 1));
	else if (specifier == '%')
		return (ft_percent_format());
	return (0);
}
