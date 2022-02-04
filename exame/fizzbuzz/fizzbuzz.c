/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fizzbuzz.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amatos-l <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/03 20:08:07 by amatos-l          #+#    #+#             */
/*   Updated: 2022/02/03 20:54:47 by amatos-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

void	ft_write_number(int n)
{
	if (n > 9)
		ft_write_number(n / 10);
	n = n % 10 + '0';
	write(1, &n, 1);
}

int	main(void)
{
	int i;

	i = 1;
	while(i <= 100)
	{
		if ((i % 15) == 0)
		   write(1, "fizzbuzz", 8);
		else if ((i % 3) == 0)
			write(1, "fizz", 4);
		else if ((i % 5) == 0)
			write(1, "buzz", 4);
		else
			ft_write_number(i);
		write(1, "\n", 1);
		i++;
	}
}
