/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amile-ge <amile-ge@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/13 19:21:46 by amile-ge          #+#    #+#             */
/*   Updated: 2023/10/27 21:21:45 by amile-ge         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_putstr(char *s, int *count)
{
	if (!s)
		s = "(null)";
	while (*s != '\0' && *count != -1)
	{
		ft_putchar(*s, count);
		s++;
	}
}
/*
int main(void)
{
	int i;
	char *s  = "HOL Aq ue tal";
	 i = ft_putstr(s);
	 printf("%s", s);

}
*/
