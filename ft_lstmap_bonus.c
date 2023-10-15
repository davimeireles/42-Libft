/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmeirele <dmeirele@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/15 11:31:49 by dmeirele          #+#    #+#             */
/*   Updated: 2023/10/15 12:12:38 by dmeirele         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*head;
	t_list	*ptrlst;

	ptrlst = lst->next;
	head = ptrlst;
	ptrlst = malloc(sizeof(t_list));
	if (!ptrlst)
		return (NULL);
	while (lst->next)
	{
		f(lst->content);
		ptrlst->content = lst->content;
		del(lst->content);
		free(lst);
		if (lst->next != NULL)
		{
			ptrlst->next = malloc(sizeof(t_list));
			ptrlst = ptrlst->next;
			lst = lst->next;
		}
	}
	ptrlst->next = NULL;
	return (head);
}
