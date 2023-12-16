/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgencali <42istanbul.com.tr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/05 15:04:39 by mgencali          #+#    #+#             */
/*   Updated: 2023/01/05 15:04:41 by mgencali         ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putstr(char *str)
{
	int		i;
	char	*n;

	n = "(null)";
	i = 0;
	if (!str)
		return (ft_putstr(n));
	while (str[i])
		write(1, &str[i++], 1);
	return (ft_strlen(str));
}
