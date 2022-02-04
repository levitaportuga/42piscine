/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amatos-l <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/03 16:53:52 by amatos-l          #+#    #+#             */
/*   Updated: 2022/02/03 17:08:57 by amatos-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcpy(char *s1, char *s2)
{
	int i;

	i = 0;
	while(s1[i])
	{
		s1[i] = s2[i];
		i++;
	}
	s1[i] = '\0';
	return (s1);
}
/*#include <string.h>
#include <stdio.h>

char *ft_strcpy(char *dest, char *src);
void ft_putstr(char *str);

int main(void)
{
	char str_src[]	= "Hello";
	char str_dest[]	= "Salut";

	printf(" %s ", ft_strcpy(str_dest, str_src));
	printf(" %s ", str_dest);
//	ft_strcpy(str_dest, str_src);

	return (0);
}*/
