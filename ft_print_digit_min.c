/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_digit_min.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: okapshai <okapshai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/07 12:46:49 by okapshai          #+#    #+#             */
/*   Updated: 2024/06/07 15:53:43 by okapshai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_print_digit_min(long n, int base)
{
	char	*symbols;
	int		count;

	count = 0;
	symbols = "0123456789abcdef";
	if (n < 0)
	{
		write (1, "-", 1);
		return (ft_print_digit_min(-n, base) + 1);
	}
	if (n < base)
	{
		return (ft_print_char(symbols[n]));
	}
	else
		count = count + ft_print_digit_min(n / base, base);
	return (count + ft_print_digit_min(n % base, base));
}
