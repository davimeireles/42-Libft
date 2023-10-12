#include "libft.h"

void ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list *node_helper;
	t_list *node_free;

	node_helper = *lst;
	while (node_helper)
	{
		del(node_helper->content);
		node_free = node_helper;
		node_helper = node_helper->next;
		free(node_free);
	}
	*lst = NULL;
}
