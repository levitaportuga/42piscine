/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amatos-l <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/25 00:11:51 by amatos-l          #+#    #+#             */
/*   Updated: 2022/01/25 21:16:32 by amatos-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	r;

	i = 0;
	r = 0;
	while (src[r])
		r++;
	if (size < 1)
		return (r);
	while (src[i] && size > i + 1 && size - 1)
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (r);
}
