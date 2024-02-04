/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aubertra <aubertra@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/17 15:03:41 by aubertra          #+#    #+#             */
/*   Updated: 2024/01/17 15:24:37 by aubertra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*head;

	head = malloc(sizeof(t_list) * 1);
	if (!head)
		return (NULL);
	head->content = content;
	head->next = NULL;
	return (head);
}

void	*del(void *lst)
{
	free(lst);
}

void	ft_lstdelone(t_list *lst, void (*del)(void*))
{
	del(lst->content);
	free(lst);
}

/*
int	main(void)
{
	int	*ptr = malloc(sizeof(int));
	*ptr = 4;
	t_list *head = ft_lstnew((void *)ptr);
	void	*ptr_del;	

	ptr_del = &del;
	printf("%ls\n", (int *)head->content);
	printf("%p\n", head->next);
	ft_lstdelone(head, ptr_del);
	printf("%ls\n", (int *)head->content);
	printf("%p\n", head->next);
	return (0);
}
*/
