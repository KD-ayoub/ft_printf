/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akadi <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/27 09:46:13 by akadi             #+#    #+#             */
/*   Updated: 2021/12/28 10:06:23 by akadi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	conditions(va_list app, char c, int len)
{
	if (c == 'p')
	{
		len += ft_putstr("0x");
		len += ft_lowhexa(va_arg(app, unsigned long));
	}
	else if (c == 'X')
		len += ft_upperhexa(va_arg(app, unsigned int));
	else if (c == 'x')
		len += ft_lowhexa(va_arg(app, unsigned int));
	else if (c == 'u')
		len += ft_putunsigned(va_arg(app, unsigned int));
	else if (c == 'd' || c == 'i')
		len += ft_putnbr(va_arg(app, int));
	else if (c == 's')
		len += ft_putstr(va_arg(app, char *));
	else if (c == 'c')
		len += ft_putchar(va_arg(app, int));
	else if (c == '%')
		len += write(1, "%", 1);
	else
		len += ft_putchar(c);
	return (len);
}

int	ft_printf(const char *ptr, ...)
{
	va_list	ap;
	int		l;

	l = 0;
	va_start(ap, ptr);
	while (*ptr)
	{
		if (*ptr == '%')
		{
			ptr++;
			l = conditions(ap, *ptr, l);
		}
		else
			l += ft_putchar(*ptr);
		ptr++;
	}
	va_end(ap);
	return (l);
}
