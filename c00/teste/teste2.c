/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   teste.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amatos-l <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/18 17:19:21 by amatos-l          #+#    #+#             */
/*   Updated: 2022/01/18 17:22:02 by amatos-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void ft_putchar(char c)
{
	write(1, &c, 1);
}

void ft_putnbr(int nb)
{
	int a;
	long int b;
	a = nb;
	b = 10000000000;

	if (nb == -2147483648)
    {
       nb = nb / 10;
    }
	if (nb < 0)
    {
    ft_putchar('-');
    nb = -nb;
    }

	while (nb / b == 0 && b != 0 && nb !=0)
	{
		b = b / 10;
		if (nb / b > 0)
		{
			ft_putchar(nb / b + '0');
			while (nb % b < b / 10)
			{
			    ft_putchar('0');
			    b = b / 10;
			    if (nb / b <= 9)
			    break;
			}
			nb = nb % b;
		}
	}
	if (a == -2147483648)
    ft_putchar('8');
}
