/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amile-ge <amile-ge@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/14 20:35:36 by amile-ge          #+#    #+#             */
/*   Updated: 2023/10/27 21:28:41 by amile-ge         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	ft_is_nega(long int nega, int *count, char c)
{
	if (c == 'u')
	{
		ft_putstr("4294", count);
		nega = 967295;
	}
	if (c == 'd' || c == 'i')
	{
		if (nega == -2147483648)
		{
			ft_putstr("-2", count);
			nega = 147483648;
		}
		else
		{
			ft_putchar('-', count);
			nega *= -1;
		}
	}
	return (nega);
}

void	ft_unsigned(unsigned int num, int *count, char c)
{
	if (num < 0)
		num = ft_is_nega(num, count, c);
	if (num > 9)
	{
		ft_unsigned(num / 10, count, c);
		num = num % 10;
	}
	if (num <= 9)
		ft_putchar(num + '0', count);
}

void	ft_putnbr(int i, int *count, char c)
{
	if (c == 'u')
		ft_unsigned(i, count, c);
	if ((c == 'd' || c == 'i'))
	{
		if (i < 0)
			i = ft_is_nega(i, count, c);
		if (i > 9)
		{
			ft_putnbr(i / 10, count, c);
			i = i % 10;
		}
		if (i <= 9)
			ft_putchar(i + '0', count);
	}
}
