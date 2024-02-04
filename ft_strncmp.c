/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aubertra <aubertra@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/17 15:07:25 by aubertra          #+#    #+#             */
/*   Updated: 2024/02/03 19:09:49 by aubertra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	long unsigned int	i;

	if (n == 0)
		return (0);
	i = 0;
	while ((s1 || s2) && s1[i] == s2[i] && i < (n - 1))
		i++;
	return (s1[i] - s2[i]);
}

/*
int	main(void)
{
	char	*s1 = "abcde";
	char	*s2 = "abcd";
	
	printf("%d\n", ft_strncmp(s1, s2, 5));
	printf("%d\n", strncmp(s1, s2, 5));
	return (0);
}
*/
