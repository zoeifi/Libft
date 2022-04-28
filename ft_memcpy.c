/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lporras- <lporras-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/02 18:12:33 by lporras-          #+#    #+#             */
/*   Updated: 2022/04/27 16:05:18 by lporras-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	size_t	i;

	i = 0;
	if (!dst && !src)
		return (0);
	while (i < n)
	{
		((unsigned char *)dst)[i] = ((unsigned char *)src)[i];
		i++;
	}
	return ((void *)dst);
}

/*#include <string.h>
#include <stdio.h>

void	*ft_memcpy(void *dst, const void *src, size_t n);

int	main(void)
{
	unsigned char o[] = "luz mary";
	unsigned char d[] = "buenos dias mundo";
	size_t	n;

	n = 4;
	printf("la funcion imprime: %s\n", memcpy(o, d, n));
	printf("mi funcion: %s\n", ft_memcpy(o, d, n));
}*/