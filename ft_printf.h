/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akadi <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/27 10:33:55 by akadi             #+#    #+#             */
/*   Updated: 2021/12/27 15:29:59 by akadi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#ifndef FT_PRINTF_H
# define FT_PRINTF_H
# include <unistd.h>
# include <stdarg.h>

int	ft_printf(const char *ptr, ...);
int	ft_putchar(char c);
int	ft_putstr(char *p);
int	ft_putnbr(int n);
int	ft_putunsigned(unsigned int n);
int	ft_lowhexa(unsigned long n);
int	ft_upperhexa(unsigned long n);
#endif
