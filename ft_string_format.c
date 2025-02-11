/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_string_format.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marshaky <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/11 21:23:18 by marshaky          #+#    #+#             */
/*   Updated: 2025/02/12 00:38:43 by marshaky         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_string_format(va_list args)
{
	char	*str;
	int		len;

	str = va_arg(args, char *);
	if (!str)
		str = "(null)";
	len = ft_strlen(str);
	return (write(1, str, len));
}
