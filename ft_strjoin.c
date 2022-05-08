/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lporras- <lporras-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/02 17:36:59 by lporras-          #+#    #+#             */
/*   Updated: 2022/05/03 19:05:32 by lporras-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	int		i;
	int		j;
	char	*lenjoin;

	i = 0;
	j = 0;
	lenjoin = malloc((ft_strlen(s1) + ft_strlen(s2) + 1) * sizeof(char));
	if (lenjoin != 0)
	{
		while (s1[i] != '\0')
		{
			lenjoin[i] = s1 [i];
			i++;
		}
		while (s2[j] != '\0')
		{
			lenjoin[i + j] = s2[j];
			j++;
		}
		lenjoin[i + j] = 0;
		return (lenjoin);
	}
	return (0);
}

/*#include<stddef.h>
#include<stdio.h>
#include<unistd.h>
#include<ctype.h>
#include<stdlib.h>
#include<string.h>

char	*ft_strjoin(char const *s1, char const *s2);
size_t	ft_strlen(const char *str);

int	main(void)
{
	const char	*c1 = "luzporras";
	const char	*c2 = "maria";
	printf ("%s/n", ft_strjoin(c1, c2));
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