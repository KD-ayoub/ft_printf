/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_hexa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akadi <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/27 11:56:53 by akadi             #+#    #+#             */
/*   Updated: 2021/12/27 15:30:29 by akadi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "ft_printf.h"

int	ft_lowhexa(unsigned long n)
{
	char	*hexa;
	int		len;

	len = 0;
	hexa = "0123456789abcdef";
	if (n < 16)
		len += write(1, hexa + n, 1);
	else if (n >= 16)
	{
		len += ft_lowhexa(n / 16);
		len += ft_lowhexa(n % 16);
	}
	return (len);
}
