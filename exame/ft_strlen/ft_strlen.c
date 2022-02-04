/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strlen.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amatos-l <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/03 17:10:00 by amatos-l          #+#    #+#             */
/*   Updated: 2022/02/03 17:18:02 by amatos-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char *str)
{
	int i;

	i = 0;
	while(str[i])
		i++;
	return(i);
}

/*#include<stdio.h>
int main()
{
char str[] = "Life is good.";
int result = ft_strlen(str);
printf("The length of the string is %d.\n", result);
return 0;
}*/
