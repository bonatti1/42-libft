/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoavelho.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbonatti <lbonatti@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/20 11:48:23 by lbonatti          #+#    #+#             */
/*   Updated: 2020/04/25 22:40:09 by lbonatti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		countn(unsigned int n)
{
	if (n < 10)
		return (1);
	return (countn(n / 10) + 1);
}

char	*ft_itoa(int n)
{
	char			*p;
	int				j;
	unsigned int	aux;

	if (n < 0)
	{
		aux = n * -1;
		j = countn(aux) + 1;
	}
	else
	{
		aux = n;
		j = countn(aux);
	}
	if (!(p = (char *)malloc(sizeof(char) * j + 1)))
		return (NULL);
	p[j--] = '\0';
	if (n < 0)
		p[0] = '-';
	while (j >= 0 && p[j] != '-')
	{
		p[j--] = (aux - ((aux / 10) * 10)) + '0';
		aux = (aux / 10);
	}
	return (p);
}
