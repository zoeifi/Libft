/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lporras- <lporras-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/10 10:38:40 by lporras-          #+#    #+#             */
/*   Updated: 2022/04/10 11:49:58 by lporras-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	char	*str;
	int		i;

	i = 0;
	str = (char *)s;
	while (str[i] != '\0')
	{
		if (str[i] == c)
			return (&str[i]);
		i++;
	}
	if (str[i] == '\0' && c == '\0')
	{
		return (&str[i]);
	}
	return (NULL);
}

/*#include <string.h>
#include <stdio.h>

char	*ft_strchr(const char *s, int c);

int	main(void)
{
	const char	s[] = "maria";
	int			c;

	c = 'i';
	printf("la función original %s\n", strchr(s, c));
	printf("mi función %s\n", ft_strchr(s, c));
}*/