/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgencali <42istanbul.com.tr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/05 15:02:31 by mgencali          #+#    #+#             */
/*   Updated: 2023/01/05 15:03:54 by mgencali         ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putnbr(long int nbr)
{
	int	a;

	a = 1;
	if (nbr < 0)
	{
		a = -1;
		ft_putchar('-');
		nbr *= -1;
	}
	if (nbr >= 10)
	{
		ft_putnbr(nbr / 10);
		ft_putnbr(nbr % 10);
	}
	else
		ft_putchar(nbr + 48);
	return (count_nbr(nbr, 10, a));
}
