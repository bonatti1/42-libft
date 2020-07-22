/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbonatti <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/12 14:03:28 by lbonatti          #+#    #+#             */
/*   Updated: 2020/02/12 14:38:02 by lbonatti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	const unsigned char	*aux;
	size_t				i;
	unsigned char		aux1;

	i = 0;
	aux = (const unsigned char *)s;
	aux1 = (unsigned char)c;
	while (i < n)
	{
		if (aux[i] == aux1)
			return ((void *)s + i);
		i++;
	}
	return (NULL);
}
