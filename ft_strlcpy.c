/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lporras- <lporras-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/06 19:08:31 by lporras-          #+#    #+#             */
/*   Updated: 2022/04/10 11:51:32 by lporras-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	if (src == NULL || dst == NULL)
		return (0);
	while (src[i] != '\0')
		i++;
	if (dstsize != 0)
	{
		while (j < (dstsize - 1) && src[j] != '\0')
		{
			dst[j] = src[j];
			j++;
		}
		dst[j] = '\0';
	}
	return (i);
}

/*size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize);

int	main(void)
{
	const char	src[] = "bueno";
	char		dst[] = "8888kjkkjjjjjjjjjj";
	size_t		dstsize;

	dstsize = 5;
	printf("%lu\n", strlcpy(dst, src, dstsize));
	printf("%s\n", dst);
	printf("%zu\n", ft_strlcpy(dst, src, dstsize));
	return (0);
}*/