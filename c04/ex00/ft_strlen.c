/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amatos-l <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/27 05:15:10 by amatos-l          #+#    #+#             */
/*   Updated: 2022/01/27 05:26:03 by amatos-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char *str)
{
	int	n;

	n = 0;
	while (str[n])
		n++;
	return (n);
}

/*#include <stdio.h>
int	ft_strlen(char *str);
int main (void)
{
	printf("%i", ft_strlen("854dsjdlk"));
}*/
