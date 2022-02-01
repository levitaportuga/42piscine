/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amatos-l <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/31 03:51:16 by amatos-l          #+#    #+#             */
/*   Updated: 2022/01/31 04:05:28 by amatos-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	main(int ac, char **av)
{
	int	i;
	int	f;

	f = ac -1;
	i = 0;
	while (f > 0)
	{
		i = 0;
		while (av[f][i])
		{
			ft_putchar(av[f][i]);
			i++;
		}
		f--;
		ft_putchar('\n');
	}
}
