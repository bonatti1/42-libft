/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbonatti <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/12 14:04:00 by lbonatti          #+#    #+#             */
/*   Updated: 2020/02/12 14:39:50 by lbonatti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	unsigned char		*auxdst;
	const unsigned char	*auxsrc;

	auxdst = (unsigned char *)dst;
	auxsrc = (const unsigned char *)src;
	if (auxdst == auxsrc)
		return (dst);
	else if (auxdst > auxsrc)
	{
		auxsrc = auxsrc + len - 1;
		auxdst = auxdst + len - 1;
		while (len > 0)
		{
			*auxdst = *auxsrc;
			auxdst--;
			auxsrc--;
			len--;
		}
	}
	else
		dst = ft_memcpy(auxdst, auxsrc, len);
	return (dst);
}
