/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amatos-l <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/29 08:19:18 by amatos-l          #+#    #+#             */
/*   Updated: 2022/01/30 05:18:00 by amatos-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>

int	ft_recursive_power(int nb, int power)
{
	int	result;

	result = nb;
	while (power > 1)
	{
		return (nb * ft_recursive_power(nb, (power - 1)));
	}
	if (power == 0)
		return (1);
	if (power < 0)
		return (0);
	return (result);
}

/*int		main(void)
{
	printf("-3 ^-1 = %d (0)\n", ft_recursive_power(-3, -1));
	printf("-3 ^ 0 = %d (1)\n", ft_recursive_power(-3, 0));
	printf("-3 ^ 1 = %d (-3)\n", ft_recursive_power(-3, 1));
	printf("-3 ^ 2 = %d (9)\n", ft_recursive_power(-3, 2));
	printf("-3 ^ 3 = %d (-27)\n", ft_recursive_power(-3, 3));
	printf(" 0 ^-1 = %d (0)\n", ft_recursive_power(0, -1));
	printf(" 0 ^ 0 = %d (1)\n", ft_recursive_power(0, 0));
	printf(" 0 ^ 2 = %d (0)\n", ft_recursive_power(0, 2));
	printf(" 4 ^-1 = %d (0)\n", ft_recursive_power(4, -1));
	printf(" 4 ^ 0 = %d (1)\n", ft_recursive_power(4, 0));
	printf(" 4 ^ 1 = %d (4)\n", ft_recursive_power(4, 1));
	printf(" 4 ^ 2 = %d (16)\n", ft_recursive_power(4, 2));
	printf(" 4 ^ 3 = %d (64)\n", ft_recursive_power(4, 3));
}*/
