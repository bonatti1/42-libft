/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbonatti <lbonatti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/18 14:13:05 by lbonatti          #+#    #+#             */
/*   Updated: 2020/03/11 15:47:04 by lbonatti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	unsigned char			auxc;
	unsigned char			*auxs1;
	const unsigned char		*auxs2;
	size_t					i;

	i = 0;
	auxc = (unsigned char)c;
	auxs1 = (unsigned char *)dst;
	auxs2 = (const unsigned char *)src;
	if (dst == NULL && src == NULL)
		return (NULL);
	if (dst == src)
		return (dst);
	while (i < n)
	{
		auxs1[i] = auxs2[i];
		if (auxc == auxs2[i])
			return (&dst[i + 1]);
		i++;
	}
	return (NULL);
}
