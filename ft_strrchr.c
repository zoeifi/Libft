/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lporras- <lporras-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/10 13:23:04 by lporras-          #+#    #+#             */
/*   Updated: 2022/04/10 14:45:22 by lporras-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char	*str;
	int		i;

	i = 0;
	str = (char *)s;
	while (str[i] != '\0')
		i++;
	while (i >= 0)
	{
		if (str[i] == (char)c)
			return (&str[i]);
		i--;
	}
	return (NULL);
}

/*#include <string.h>
#include <stdlib.h>
#include <stdio.h>

char	*ft_strrchr(const char *s, int c);

int	main(void)
{
	const char	s[] = "maria";
	int			c;

	c = 'r';
	printf("la función original %s\n", strrchr(s, c));
	printf("mi función %s\n", ft_strrchr(s, c));
}*/