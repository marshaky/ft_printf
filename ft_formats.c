/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_formats.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marshaky <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/11 20:31:51 by marshaky          #+#    #+#             */
/*   Updated: 2025/02/12 10:20:30 by marshaky         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

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
