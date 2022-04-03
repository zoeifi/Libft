/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lporras- <lporras-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/01 18:25:28 by lporras-          #+#    #+#             */
/*   Updated: 2022/04/02 17:06:26 by lporras-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
#include <stddef.h>

void	*ft_memset(void *b, int c, size_t len);

int	main(void)
{
	unsigned char a[] = "luz mary";
	int		c;
	size_t	len;

	c = '9';
	len = 4;
	printf("mi funcion: %s\n", ft_memset(a, c, len));
}

void	*ft_memset(void *b, int c, size_t len)
{
	size_t			i;

	i = 0;
	while (i < len)
	{
		((unsigned char *)b)[i] = c;
		i++;
	}
	return (b);
}


/*int	main(void)
{
	char a[] ="luz mary";

	puts(a);
	memset(a, '.', 4);
	puts(a);
	return (0);
}*/

/*void	*ft_memset(void *b, int c, size_t len)
{
	size_t			i;
	char	*str;

	str = (char *)b;
	i = 0;
	while (i < len)
	{
		((char *)b)[i] = c;
		i++;
	}
	return (b);
}*/

/*void	*ft_memset(void *b, int c, size_t len)
{
	size_t			i;
	unsigned char	*str;

	str = b;
	i = 0;
	while (i < len)
	{
		str[i] = c;
		i++;
	}
	return (b);
}
*/