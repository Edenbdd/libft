/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aubertra <aubertra@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/17 15:04:01 by aubertra          #+#    #+#             */
/*   Updated: 2024/01/17 15:23:10 by aubertra         ###   ########.fr       */
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

void	ft_lstadd_front(t_list **lst, t_list *new)
{
	new->next = *lst;
	*lst = new;
}
/*
int	main(void)
{
	int	*ptr = malloc(sizeof(int));
	int	*ptr_lst = malloc(sizeof(int));

	*ptr = 4;
	*ptr_lst = 2;
	t_list *new_head = ft_lstnew((void *)ptr);
	t_list *lst_head = ft_lstnew((void *) ptr_lst);
	printf("%d\n", *(int *)lst_head->content);
        printf("%p\n", lst_head->next);
	ft_lstadd_front(&lst_head, new_head);
	printf("%d\n", *(int *)lst_head->content);
        printf("%p\n", lst_head->next);
	return (0);
}
*/
