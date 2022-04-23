/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lporras- <lporras-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/09 18:51:21 by lporras-          #+#    #+#             */
/*   Updated: 2022/04/23 12:38:15 by lporras-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	so;
	size_t	sd;
	size_t	i;

	i = 0;
	so = ft_strlen(src);
	sd = ft_strlen(dst);
	if (!(so && sd))
		return (0);
	if (dstsize < sd)
	{
		return (so + dstsize);
	}
	if (dstsize > sd)
	{
		while ((i < (dstsize - sd - 1)) && (src[i] != '\0'))
		{
			dst[sd + i] = src[i];
			i++;
		}
	}	
	dst[sd + i] = '\0';
	return (so + sd);
}

/*
size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	so;
	size_t	sd;
	size_t	i;

	i = 0;
	so = ft_strlen(dst);
	sd = ft_strlen(src);
	if (dstsize < sd + 1)
	{
		return (so + dstsize);
	}
	while ((sd + i + 1 < dstsize) && (src[i] != '\0'))
	{
		dst[sd + i] = src [i];
		i++;
	}
	dst[sd + i] = '\0';
	return (so + sd);
}*/

/*#include <string.h>
#include <stdio.h>
#include <stddef.h>

int	ft_strlen(const char *str);
size_t	ft_strlcat(char *dst, const char *src, size_t dstsize);

int	main(void)
{
	const char	src[] = "lu";
	char		dst[] = "marialll";
	size_t		dstsize;

	dstsize = 2;
	printf("%lu\n", ft_strlcat(dst, src, dstsize));
	//printf("%lu\n", strlcat(dst, src, dstsize));
	//printf("%s\n", dst);
}

int	ft_strlen(const char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}*/