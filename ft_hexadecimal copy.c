/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_hexadecimal.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amile-ge <amile-ge@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/22 16:17:20 by amile-ge          #+#    #+#             */
/*   Updated: 2023/10/27 21:26:44 by amile-ge         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_hexadecimal(unsigned long c, char cha, int *count)
{
	char	*base;

	if (*count == -1)
		return ;
	if (cha == 'x' || cha == 'p')
		base = "0123456789abcdef";
	if (cha == 'X')
		base = "0123456789ABCDEF";
	if (c > 15)
		ft_hexadecimal(c / 16, cha, count);
	ft_putchar((unsigned long)(base)[c % 16], count);
}
