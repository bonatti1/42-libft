/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbonatti <lbonatti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/20 17:48:00 by lbonatti          #+#    #+#             */
/*   Updated: 2020/02/12 15:12:52 by lbonatti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int	ft_isspace(char str)
{
	if (str == '\t' || str == '\n' || str == '\v' || str == '\f' ||
			str == '\r' || str == ' ')
		return (1);
	return (0);
}

int	ft_atoi(const char *str)
{
	int				i;
	unsigned int	aux;
	int				sinal;

	sinal = 1;
	aux = 0;
	i = 0;
	while (ft_isspace(str[i]))
		i++;
	if (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			sinal = -1;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		aux = (aux * 10) + (str[i] - 48);
		i++;
	}
	return (sinal * aux);
}
