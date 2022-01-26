/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amatos-l <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/24 22:20:48 by amatos-l          #+#    #+#             */
/*   Updated: 2022/01/25 19:06:41 by amatos-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

char	*ft_strcapitalize(char *str)
{
	int	i;
	int	b;

	i = 0;
	b = 1;
	while (str[i])
	{
		if (str[i] >= 'A' && str [i] <= 'Z')
			str[i] += 32;
		if (str[i] >= 'a' && str[i] <= 'z' && b == 1)
		{
			if (b == 1)
				str[i] -= 32;
			b = 0;
		}
		if (!((str[i] >= 'a' && str[i] <= 'z')
				|| (str[i] >= 'A' && str[i] <= 'Z')))
			b = 1;
		if (str[i] >= '0' && str[i] <= '9')
			b = 0;
		i++;
	}
	return (str);
}
