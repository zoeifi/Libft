/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lporras- <lporras-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/19 16:07:55 by lporras-          #+#    #+#             */
/*   Updated: 2022/04/23 11:16:37 by lporras-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *str)
{
	int	r;
	int	s;
	int	i;

	r = 0;
	s = 1;
	i = 0;
	while ((str[i] == 32) || (str[i] >= 9 && str[i] <= 13))
		i++;
	if (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			s = -1;
		i++;
	}
	while ((str[i] >= 48) && (str[i] <= 57))
	{
		r = ((r * 10) + str[i] - 48);
		i++;
	}
	return ((int)(r * s));
}

/*#include <string.h>
#include <stdio.h>
#include <stddef.h>
#include <stdlib.h>

int	ft_atoi(const char *str);

int	main(void)
{
	char	s1[] = "1234";

	printf ("la función imprime:%d\n", atoi(s1));
	printf ("mi función imprime:%d\n", ft_atoi(s1));
	return (0);
}*/
