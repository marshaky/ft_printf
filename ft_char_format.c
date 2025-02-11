/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_char_format.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marshaky <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/11 21:22:18 by marshaky          #+#    #+#             */
/*   Updated: 2025/02/12 00:38:03 by marshaky         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_char_format(va_list args)
{
	unsigned char	c;

	c = (unsigned char)va_arg(args, int);
	return (ft_putchar(c));
}
