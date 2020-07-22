/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbonatti <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/10 13:38:33 by lbonatti          #+#    #+#             */
/*   Updated: 2020/03/11 16:10:43 by lbonatti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	i;
	size_t	j;
	char	*p;

	if (!s1 || !set)
		return (NULL);
	i = 0;
	j = ft_strlen(s1);
	while ((i < j) && ft_strchr(set, (int)s1[i]))
		i++;
	if (i == j)
	{
		p = (char *)malloc(sizeof(char) * 1);
		if (p == NULL)
			return (NULL);
		p[0] = '\0';
		return (p);
	}
	while ((j > 0) && ft_strchr(set, (int)s1[j]))
		j--;
	p = ft_substr(s1, i, (j - i) + 1);
	return (p);
}
