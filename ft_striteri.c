/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lporras- <lporras-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/10 16:01:21 by lporras-          #+#    #+#             */
/*   Updated: 2022/05/13 14:00:53 by lporras-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	f(unsigned int i, char str);
void	ft_striteri(char *s, void (*f)(unsigned int, char *));

char	f(unsigned int i, char str)
{
	i = 32;
	return (str - i);
}

void	ft_striteri(char *s, void (*f)(unsigned int, char *))
{
	unsigned int	i;

	i = 0;
	if (!s)
		return ;
	while (s[i] != '\0')
	{
		f(i, s + i);
		i++;
	}
}

/*#include<unistd.h>
#include<ctype.h>
#include<stdlib.h>
#include<string.h>
int	main(void)
{
	char	str[] = "holaluz";
	char	*r;

	r = ft_striteri(str, f);
	printf("el resultado de la funcion es %s\n", r);
	return (0);
}
*/