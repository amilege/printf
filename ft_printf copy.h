/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amile-ge <amile-ge@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/10 11:13:18 by amile-ge          #+#    #+#             */
/*   Updated: 2023/10/27 21:18:50 by amile-ge         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H
# include <stdio.h>
# include <stdlib.h>
# include <unistd.h>
# include <stdarg.h>

void	ft_putchar(char c, int *count);
void	ft_putstr(char *s, int *count);
void	ft_putnbr(int i, int *count, char c);
int		ft_printf(char const *string, ...);
void	ft_hexadecimal(unsigned long c, char cha, int *count);
void	ft_unsigned(unsigned int num, int *count, char c);

#endif
