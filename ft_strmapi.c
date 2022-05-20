/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lporras- <lporras-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/08 17:58:25 by lporras-          #+#    #+#             */
/*   Updated: 2022/05/08 19:39:32 by lporras-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	unsigned int	i;
	char			*str;

	i = 0;
	if (s == NULL || f == NULL)
		return (NULL);
	str = (char *)malloc(sizeof(char) * (ft_strlen(s) + 1));
	if (str == NULL)
		return (NULL);
	while (s[i] != '\0')
	{
		str[i] = f(i, ((char *)s)[i]);
		i++;
	}
	str[i] = '\0';
	return (str);
}

/*#include<stdio.h>
#include<unistd.h>
#include<ctype.h>
#include<stdlib.h>
#include<string.h>

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char));
char	f(unsigned int i, char str);
size_t	ft_strlen(const char *str);

int	main(void)
{
	char	str[] = "holaluz";
	char	*r;

	printf("la funcion imprime %s\n", str);
	r = ft_strmapi(str, f);
	printf("el resultado de la funcion es %s\n", r);
	return (0);
}

char	f(unsigned int i, char str)
{
	i = 32;
	printf("f imprime: i = %d - %c\n", i, str);
	return (str - i);
}
*/
