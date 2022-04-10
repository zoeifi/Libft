/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lporras- <lporras-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/10 18:17:03 by lporras-          #+#    #+#             */
/*   Updated: 2022/04/10 18:52:11 by lporras-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char	*c1;
	unsigned char	*c2;
	size_t			i;

	i = 0;
	c1 = (unsigned char *)s1;
	c2 = (unsigned char *)s2;
	while (i < n)
	{
		if ((c1[i] < c2[i]) || (c1[i] > c2[i]))
			return (c1[i] - c2[i]);
		i++;
	}
	return (0);
}

/*#include <string.h>
#include <stdio.h>
#include <stddef.h>

int	ft_memcmp(const void *s1, const void *s2, size_t n);

int	main(void)
{
	const char	s1[] = "maria";
	const char	s2[] = "maria";
	size_t		n;

	n = 2;
	printf("la función original %d\n", memcmp(s1, s2, n));
	printf("mi función %d\n", ft_memcmp(s1, s2, n));
}
*/