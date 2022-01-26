/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_with_non_printable.c                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amatos-l <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/25 03:02:46 by amatos-l          #+#    #+#             */
/*   Updated: 2022/01/25 22:13:44 by amatos-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write (1, &c, 1);
}

void	ft_putstr_non_printable(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (!(str[i] >= 32 && str[i] < 127))
		{
			ft_putchar ('\\');
			ft_putchar ("0123456789abcdef"[str[i] / 16]);
			ft_putchar ("0123456789abcdef"[str[i] % 16]);
		}
		else
			ft_putchar (str[i]);
		i++;
	}
}
