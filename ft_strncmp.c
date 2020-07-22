/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbonatti <lbonatti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/12 14:05:28 by lbonatti          #+#    #+#             */
/*   Updated: 2020/03/11 14:12:08 by lbonatti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	unsigned int	i;
	unsigned char	*auxs1;
	unsigned char	*auxs2;

	i = 0;
	auxs1 = (unsigned char *)s1;
	auxs2 = (unsigned char *)s2;
	while (auxs1[i] != '\0' && auxs2[i] != '\0' && i < n)
	{
		if (auxs1[i] != auxs2[i])
			return (auxs1[i] - auxs2[i]);
		i++;
	}
	if (i < n)
	{
		if (auxs1[i] == '\0' && auxs2[i] != '\0')
			return (auxs1[i] - auxs2[i]);
		if (auxs1[i] != '\0' && auxs2[i] == '\0')
			return (auxs1[i] - auxs2[i]);
	}
	return (0);
}
