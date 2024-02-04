/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aubertra <aubertra@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/17 15:02:15 by aubertra          #+#    #+#             */
/*   Updated: 2024/01/17 15:22:50 by aubertra         ###   ########.fr       */
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

t_list	*ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*ptr;

	ptr = lst;
	while (ptr->next != NULL)
	{
		ptr = ptr->next;
	}
	ptr = new;
	return (ptr);
}
/*
int	main(void)
{
	int	*ptr = malloc(sizeof(int));
	t_list *new;
	t_list	*head = malloc(sizeof(t_list));
	if (!head)
		return (1);
	ptr = 6;
	head->content = (void *)4;
	head->next = NULL;
	t_list	*head_1 = malloc(sizeof(t_list));
	if (!head_1)
		return (1);
	head_1->content = (void *)5;
	head_1->next = NULL;
	head->next = head_1;
	new = ft_lstnew((void *)ptr);
	ft_lstadd_back(&head, new);

	return (0);
}
*/
