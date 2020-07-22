/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbonatti <lbonatti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/12 14:03:42 by lbonatti          #+#    #+#             */
/*   Updated: 2020/03/11 14:10:17 by lbonatti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_memcmp(const void *s1, const void *s2, size_t n)
{
	const unsigned char	*dst1;
	const unsigned char	*dst2;
	size_t				i;

	i = 0;
	dst1 = (unsigned char *)s1;
	dst2 = (unsigned char *)s2;
	while (i < n)
	{
		if (dst1[i] != dst2[i])
			return (dst1[i] - dst2[i]);
		i++;
	}
	return (0);
}
