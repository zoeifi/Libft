/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lporras- <lporras-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/02 16:36:04 by lporras-          #+#    #+#             */
/*   Updated: 2022/04/02 18:09:08 by lporras-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <strings.h>
#include <stddef.h>

void	ft_bzero(void *s, size_t n);

/*int	main(void)
{
	unsigned char a[] = "hola mundo";
	size_t	n;

	n = 5;
	ft_bzero(a, n);
	printf("mi función;%c\n", a[5]);
}*/

int	main(void)
{
	unsigned char a[] = "hola mundo";
	size_t	n;

	n = 5;
	ft_bzero(a, n);
	printf("mi función;%s\n", (a));
}

void	ft_bzero(void *s, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n)
	{
		((unsigned char *)s)[i] = '0';
		i++;
	}
}
