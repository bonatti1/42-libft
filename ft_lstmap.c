/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbonatti <lbonatti@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/12 16:45:06 by lbonatti          #+#    #+#             */
/*   Updated: 2020/04/25 23:28:36 by lbonatti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*mapeado;
	t_list	*tmp;

	if (lst == NULL || f == NULL)
		return (NULL);
	mapeado = NULL;
	while (lst != NULL)
	{
		if ((tmp = ft_lstnew((*f)(lst->content))) == NULL)
		{
			ft_lstclear(&mapeado, del);
			return (NULL);
		}
		ft_lstadd_back(&mapeado, tmp);
		lst = lst->next;
	}
	return (mapeado);
}
