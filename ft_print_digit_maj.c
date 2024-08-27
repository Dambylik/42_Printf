/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_digit_maj.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: okapshai <okapshai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/07 12:45:08 by okapshai          #+#    #+#             */
/*   Updated: 2024/06/07 16:08:18 by okapshai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_print_digit_maj(long n, int base)
{
	char	*symbols;
	int		count;

	count = 0;
	symbols = "0123456789ABCDEF";
	if (n < 0)
	{
		write (1, "-", 1);
		return (ft_print_digit_maj(-n, base) + 1);
	}
	if (n < base)
	{
		return (ft_print_char(symbols[n]));
	}
	else
		count = count + ft_print_digit_maj(n / base, base);
	return (count + ft_print_digit_maj(n % base, base));
}
