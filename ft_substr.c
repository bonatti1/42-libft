/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbonatti <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/20 11:49:45 by lbonatti          #+#    #+#             */
/*   Updated: 2020/03/11 16:08:56 by lbonatti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(const char *s, unsigned int start, size_t len)
{
	int		j;
	char	*dst;

	if (s == NULL)
		return (NULL);
	dst = (char*)malloc((len + 1) * sizeof(char));
	if (dst == NULL)
		return (NULL);
	if (ft_strlen(s) < start)
		len = 0;
	j = 0;
	while (len--)
	{
		dst[j] = s[start + j];
		j++;
	}
	dst[j] = '\0';
	return (dst);
}
