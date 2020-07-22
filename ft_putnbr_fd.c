/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbonatti <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/18 13:40:56 by lbonatti          #+#    #+#             */
/*   Updated: 2020/02/18 14:25:42 by lbonatti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	printnum(int num, int fd)
{
	int		mod;

	if (num > 9)
		printnum(num / 10, fd);
	mod = (num % 10) + 48;
	write(fd, &mod, 1);
}

void	ft_putnbr_fd(int n, int fd)
{
	if (n == -2147483648)
	{
		write(fd, "-", 1);
		n = (n / 10) * -1;
		printnum(n, fd);
		write(fd, "8", 1);
	}
	else if (n < 0)
	{
		write(fd, "-", 1);
		n = n * -1;
		printnum(n, fd);
	}
	else
		printnum(n, fd);
}
