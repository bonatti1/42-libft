/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbonatti <lbonatti@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/28 13:02:01 by lbonatti          #+#    #+#             */
/*   Updated: 2020/04/25 23:26:24 by lbonatti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*calc(int n, int count, char *str)
{
	unsigned int	sinal;

	str[count] = 0;
	count--;
	sinal = (n > 0) ? n : -n;
	while (sinal)
	{
		str[count] = (sinal % 10) + '0';
		sinal /= 10;
		count--;
	}
	if (!count)
		str[count] = '-';
	return (str);
}

char	*ft_itoa(int n)
{
	int				count;
	unsigned int	sinal;
	char			*str;

	count = (n > 0) ? 0 : 1;
	sinal = (n > 0) ? n : -n;
	if (n == 0)
	{
		if (!(str = malloc(count + 1)))
			return (NULL);
		str[0] = '0';
		str[1] = 0;
		return (str);
	}
	while (sinal)
	{
		count++;
		sinal /= 10;
	}
	if (!(str = malloc(count + 1)))
		return (NULL);
	return (calc(n, count, str));
}
