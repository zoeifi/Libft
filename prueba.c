/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   prueba.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lporras- <lporras-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/06 16:20:57 by lporras-          #+#    #+#             */
/*   Updated: 2022/04/06 18:08:56 by lporras-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	main(void)
{
	unsigned char	src[]= "buenas tardes";
	unsigned char	dest[] = "8888";
    size_t len = 5;
    printf("%s\n", ft_memmove(dest, src, len));
	printf("%s\n", memmove(dest, src, len));
}

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
