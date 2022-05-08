/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lporras- <lporras-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/29 14:15:56 by lporras-          #+#    #+#             */
/*   Updated: 2022/05/07 14:35:13 by lporras-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char			*s1;

	if (len > ft_strlen(s))
		len = ft_strlen(s);
	s1 = (char *)malloc(sizeof(char) * (len + 1));
	if (!s1)
		return (NULL);
	while (start >= ft_strlen(s))
	{
		*s1 = '\0';
		return (s1);
	}
	ft_strlcpy(s1, &s[start], len + 1);
	return (s1);
}

/*char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*s1;
	size_t	i;

	i = 0;
	s1 = (char *)malloc(len * sizeof(char) + 1);
	if (s == NULL || s1 == NULL)
		return (NULL);
	while (start > ft_strlen(s))
	{
		*s1 = '\0';
		return (s1);
	}
	while (len > 0)
	{
		s1[i] = s[start];
		i++;
		start++;
		len--;
	}
	s1[i] = '\0';
	return (s1);
}

#include<stddef.h>
#include<stdio.h>
#include<unistd.h>
#include<ctype.h>
#include<stdlib.h>
#include<string.h>

char	*ft_substr(char const *s, unsigned int start, size_t len);
size_t	ft_strlen(const char *str);

int	main(void)
{
	char	*s = "luz mary porras anaya";
	printf ("%s \n", ft_substr(s, 2, 8));
}

size_t	ft_strlen(const char *str)
{
	size_t	i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}
*/