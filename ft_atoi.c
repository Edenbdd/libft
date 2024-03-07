/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aubertra <aubertra@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/17 14:54:40 by aubertra          #+#    #+#             */
/*   Updated: 2024/03/05 10:58:48 by aubertra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *nptr)
{
	int	i;
	int	moins;
	int	nb;

	i = 0;
	moins = 0;
	nb = 0;
	while (nptr[i] == 32 || (nptr[i] >= 9 && nptr[i] <= 13))
		i++;
	if (nptr[i + 1] == '+' || nptr[i + 1] == '-')
		return (nb);
	if (nptr[i] == '-' || nptr[i] == '+')
	{
		if (nptr[i] == '-')
			moins++;
		i++;
	}
	while (nptr[i] >= '0' && nptr[i] <= '9')
	{
		nb = nb * 10 + (nptr[i] - 48);
		i++;
	}
	if (moins % 2)
		nb = -nb;
	return (nb);
}
/*
#include <stdio.h>

int	main(void)
{
	char	*nb1;
	char	*nb2;

	nb1 = "";
	nb2 = "";
  	printf("%d\n", ft_atoi(nb1));
  	printf("%d\n", atoi(nb2));
	return (0);
}
*/