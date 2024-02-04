/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aubertra <aubertra@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/17 15:03:34 by aubertra          #+#    #+#             */
/*   Updated: 2024/01/18 10:17:53 by aubertra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstlast(t_list *lst)
{
	t_list	*ptr;

	ptr = lst;
	while (ptr->next != NULL)
	{
		ptr = ptr->next;
	}
	return (ptr);
}

/*
int	main(void)
{
	t_list *head = malloc(sizeof(t_list));
	if (!head)
		return(1);
	head->content = (void *)5;
	head->next = NULL;
	t_list *head_1 = malloc(sizeof(t_list));
	if (!head_1)
		return(1);
	head_1->content = (void *)6;
	head_1->next = NULL;
	t_list *head_2 = malloc(sizeof(t_list));
	if (!head_2)
		return(1);
	head_2->content = (void *)7;
	head_2->next = NULL;
	head->next = head_1;
	head_1->next = head_2;
	printf("%p\n", ft_lstlast(head_1->next));
	printf("%p\n", ft_lstlast(head));
	return (0);
}
*/
