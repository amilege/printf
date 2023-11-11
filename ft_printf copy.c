/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amile-ge <amile-ge@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/21 18:42:52 by amile-ge          #+#    #+#             */
/*   Updated: 2023/11/11 11:45:51 by amile-ge         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_what_function(char const *c, va_list args, int *count)
{
	if (*c == 'c')
		ft_putchar(va_arg(args, int), count);
	else if (*c == '%')
		ft_putchar('%', count);
	else if (*c == 'i' || *c == 'd')
		ft_putnbr(va_arg(args, long int), count, *c);
	else if (*c == 'u')
		ft_putnbr(va_arg(args, unsigned long), count, *c);
	else if (*c == 's')
		ft_putstr(va_arg(args, char *), count);
	else if (*c == 'x' || *c == 'X')
		ft_hexadecimal(va_arg(args, unsigned int), *c, count);
	else if (*c == 'p')
	{
		ft_putstr("0x", count);
		ft_hexadecimal(va_arg(args, unsigned long), *c, count);
	}
}

int	ft_printf(char const *string, ...)
{
	va_list	args;
	int		count;

	count = 0;
	va_start(args, string);
	while (*string != '\0' && count != -1)
	{
		if (*string == '%')
		{
			string++;
			ft_what_function(string, args, &count);
		}
		else
			ft_putchar(*string, &count);
		if (count == -1)
		{
			va_end(args);
			return (-1);
		}
		if (*string)
			string++;
	}
	va_end(args);
	return (count);
}
/*
int main ()
{
	printf("Lo que deberia dar: '%\0a'\n");
	ft_printf("Lo que da: '%\0a'\n");
}
*/
