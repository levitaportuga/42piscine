/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amatos-l <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/31 04:07:16 by amatos-l          #+#    #+#             */
/*   Updated: 2022/01/31 21:20:59 by amatos-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

void	ft_print_params(char *par)
{
	while (*par)
		write(1, par++, 1);
	write(1, "\n", 1);
}

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] == s2[i] && ((s1[i] != '\0') || (s2[i] != '\0')))
	{
		i++;
	}
	return (s1[i] - s2[i]);
}

void	ft_sort_params(int ac, char *av[])
{
	int		k;
	char	*swap;

	k = 1;
	while (k < ac -1)
	{
		if (ft_strcmp(av[k], av[k + 1]) > 0)
		{
			swap = av[k];
			av[k] = av[k + 1];
			av[k + 1] = swap;
			k = 0;
		}
		k++;
	}
}

int	main(int ac, char *av[])
{
	int	j;

	if (ac > 1)
	{
		ft_sort_params(ac, av);
		j = 1;
		while (j < ac)
		{
			ft_print_params(av[j]);
			j++;
		}
	}
	return (0);
}
