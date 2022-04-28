/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lporras- <lporras-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/04 17:29:35 by lporras-          #+#    #+#             */
/*   Updated: 2022/04/23 15:51:44 by lporras-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	char	*d;
	char	*o;

	d = (char *)dst;
	o = (char *)src;
	if (d > o)
	{
		while (len--)
		{
			d[len] = o[len];
		}
	}
	else if (d < o)
	{
		ft_memcpy(dst, src, len);
	}
	return (d);
}

/*#include <string.h>
#include <stdio.h>
#include <stddef.h>

void	*ft_memmove(void *dst, const void *src, size_t len);

void	*ft_memcpy(void *dst, const void *src, size_t n);

int	main(void)
{
	unsigned char	src[]= "buenas tardes";
	unsigned char	dest[] = "8888";
	size_t			len;

	len = 5;
	printf("%s\n", ft_memmove(dest, src, len));
	printf("%s\n", memmove(dest, src, len));
}

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
*/