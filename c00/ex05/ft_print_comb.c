/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amatos-l <amatos-l@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/15 06:43:06 by amatos-l          #+#    #+#             */
/*   Updated: 2022/01/17 02:51:38 by amatos-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_comb(void)
{
	char	num[3];

	num[0] = '0';
	while (num[0] <= '7')
	{
		num[1] = num[0] + 1;
		while (num[1] <= '8')
		{
			num[2] = num[1] + 1;
			while (num[2] <= '9')
			{
				if (num[0] != num[1] && num[1] != num[2])
				{
					write(1, num, 3);
					if (num[0] != '7')
						write(1, ", ", 2);
				}
				num[2]++;
			}
			num[1]++;
		}		
		num[0]++;
	}
}
