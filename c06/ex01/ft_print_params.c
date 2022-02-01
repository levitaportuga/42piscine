/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amatos-l <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/31 03:32:58 by amatos-l          #+#    #+#             */
/*   Updated: 2022/01/31 23:46:25 by amatos-l         ###   ########.fr       */
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

	i = 1;
	f = 0;
	if (ac < 2)
		return (0);
	while (i < ac)
	{
		while (av[i][f])
		{
			ft_putchar(av[i][f]);
			f++;
		}
		i++;
		f = 0;
		ft_putchar('\n');
	}
}
