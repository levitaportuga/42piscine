/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amatos-l <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/26 02:26:32 by amatos-l          #+#    #+#             */
/*   Updated: 2022/01/26 03:05:04 by amatos-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>

int	ft_strcmp(char *s1, char *s2)
{
	unsigned int	a;

	a = 0;
	while (s1[a] == s2[a] && (s1[a] || s2[a]))
	{
		a++;
	}
	return (s1[a] - s2[a]);
}

/*int	main()
{
	printf("%d", ft_strcmp("Hello", "Hello1"));
	printf("\n%d", ft_strcmp("Hello", "He"));
	printf("\n%d", ft_strcmp("Hell", "Hello"));
	printf("\n%d", ft_strcmp("Hello", "Hello"));
}*/
