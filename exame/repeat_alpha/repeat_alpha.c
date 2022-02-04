/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   repeat_alpha.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amatos-l <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/03 17:26:24 by amatos-l          #+#    #+#             */
/*   Updated: 2022/02/03 18:02:16 by amatos-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

int main(int ac, char **av)
{
	int i;
	int r;

	i = 0;
	if (ac == 2)
	{
		while (av[1][i])
		{
			r = 1;
			if (av[1][i] >= 'a' && av[1][i] <= 'z')
				r += av[1][i] - 'a';
			else if (av[1][i] >= 'A' && av[1][i] <= 'Z')
				r += av[1][i] -'A';
			while(r)
			{
				write(1, &av[1][i], 1);
				r--;
			}
			i++;
		}
		write(1, "\n", 1);
		return(0);
	}
}
