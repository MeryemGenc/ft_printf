/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_hex.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgencali <42istanbul.com.tr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/05 15:04:10 by mgencali          #+#    #+#             */
/*   Updated: 2023/01/05 15:04:12 by mgencali         ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <stdio.h>

int	ft_putnbr_hex(unsigned long nbr, char bs)
{
	if (nbr >= 16)
	{
		ft_putnbr_hex((nbr / 16), bs);
		ft_putnbr_hex((nbr % 16), bs);
	}
	else
	{
		if (nbr < 10)
			ft_putnbr(nbr);
		else
			ft_putchar(nbr - 10 + 'a' + bs - 'x');
	}
	return (count_nbr(nbr, 16, 1));
}
