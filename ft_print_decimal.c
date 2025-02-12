/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_decimal.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marshaky <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/11 21:26:44 by marshaky          #+#    #+#             */
/*   Updated: 2025/02/12 10:16:27 by marshaky         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_print_decimal(va_list args)
{
	int		val;
	char	*str;
	int		len;

	val = va_arg(args, int);
	str = ft_itoa(val);
	if (!str)
		return (0);
	len = write(1, str, ft_strlen(str));
	free(str);
	return (len);
}

// int	ft_print_decima(va_list args)
// {
// 	int		val;
// 	int		i;
// 	char	*str;

// 	val = va_arg(args, int);
// 	i = 0;
// 	if (val == -2147483648)
// 		return (write(1, "-2147483648", 11));
// 	if (val < 0)
// 	{
// 		i += write(1, "-", 1);
// 		val = -val;
// 	}
// 	str = ft_itoa(val);
// 	if (!str)
// 		return (0);
// 	i += write(1, str, ft_strlen(str));
// 	free(str);
// 	return (i);
// }
