/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_combn.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amatos-l < amatos-l@student.42lisboa.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/18 22:38:29 by amatos-l          #+#    #+#             */
/*   Updated: 2022/01/19 17:48:05 by amatos-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_combn(int n);

void	next_num(char *str, int n);

void	ft_print_combn(int n)
{
	char	str[9];
	int		i;

	i = 0;
	while (i < n)
	{
		str[i] = i + '0';
		i++;
	}
	while (str[0] != '\0')
	{
		write(1, str, n);
		next_num(str, n);
		if (str[0] != '\0')
			write(1, ", ", 2);
	}
}

void	next_num(char *str, int n)
{
	int	i;

	if (str[n - 1] < '9')
		str[n - 1] += 1;
	else
	{
		i = n - 1;
		while (i >= 0 && str [i] >= 10 - n + i + '0')
			i--;
		if (i < 0)
			*str = '\0';
		else
		{
			str [i] += 1;
			i++;
			while (i < n)
			{
				str [i] = str [i - 1] + 1;
				i++;
			}
		}
	}
}
