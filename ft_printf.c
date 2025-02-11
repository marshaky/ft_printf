/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marshaky <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/11 20:07:05 by marshaky          #+#    #+#             */
/*   Updated: 2025/02/12 01:20:01 by marshaky         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

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
				len += ft_percent_format();
		}
		else
			len += ft_putchar(*prm);
		prm++;
	}
	va_end(args);
	return (len);
}
