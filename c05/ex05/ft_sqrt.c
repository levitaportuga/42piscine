/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amatos-l <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/31 01:21:13 by amatos-l          #+#    #+#             */
/*   Updated: 2022/01/31 02:01:39 by amatos-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>

int	ft_sqrt(int nb)
{
	int	n;

	n = 1;
	if (nb > 0)
	{
		while (n * n <= nb)
		{
			if (n * n == nb)
				return (n);
			else if (n >= 46341)
				return (0);
			n++;
		}
	}
	return (0);
}

/*int		main(void)
{
	printf("-10 = %d (0)\n", ft_sqrt(-10));
	printf("-1 = %d (0)\n", ft_sqrt(-1));
	printf(" 0 = %d (0)\n", ft_sqrt(0));
	printf(" 1 = %d (1)\n", ft_sqrt(1));
	printf(" 2 = %d (0)\n", ft_sqrt(2));
	printf(" 3 = %d (0)\n", ft_sqrt(3));
	printf(" 4 = %d (2)\n", ft_sqrt(4));
	printf(" 9 = %d (3)\n", ft_sqrt(9));
	printf(" 16 = %d (4)\n", ft_sqrt(16));
	printf(" 25 = %d (5)\n", ft_sqrt(25));

}*/