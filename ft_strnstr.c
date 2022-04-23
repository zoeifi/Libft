/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lporras- <lporras-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/17 12:31:43 by lporras-          #+#    #+#             */
/*   Updated: 2022/04/19 16:02:56 by lporras-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	size_t	j;

	i = 0;
	if (needle[i] == '\0')
		return ((char *)haystack);
	while (haystack[i] && i < len)
	{
		j = 0;
		while (haystack[i + j] == needle[j] && i + j < len)
		{
			if (needle[j + 1] == '\0')
			{
				return ((char *)haystack + i);
			}
			j++;
		}
		i++;
	}
	return (NULL);
}

/*#include <string.h>
#include <stdio.h>
#include <stddef.h>
#include <stdlib.h>

char	*ft_strnstr(const char *haystack, const char *needle, size_t len);

int	main(void)
{
	char	s1[] = "hola mundo";
	char	s2[] = "mundo";
	size_t	len;

	len = 15;
	printf ("la función imprime:%s\n", strnstr(s1, s2, len));
	printf ("mi función imprime:%s\n", ft_strnstr(s1, s2, len));
	return (0);
}*/
