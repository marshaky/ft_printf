/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marshaky <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/11 20:07:03 by marshaky          #+#    #+#             */
/*   Updated: 2025/02/12 01:05:47 by marshaky         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include "./libft/libft.h"
# include <stdarg.h>
# include <stdio.h>

int		ft_printf(const char *prm, ...);
int		ft_is_argument(int c);
int		ft_formats(va_list args, char specifier);
int		ft_char_format(va_list args);
int		ft_string_format(va_list args);
int		ft_decimal_format(va_list args);
int		ft_void_pointer_format(va_list args);
int		ft_unsigned_decimal_format(va_list args);
int		ft_hex_format(va_list args, int uppercase);
int		ft_percent_format(void);
int		ft_putchar(char c);
char	*ft_itoa_base(unsigned long num, int base_len, char *base);

#endif