/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lporras- <lporras-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/02 16:36:04 by lporras-          #+#    #+#             */
/*   Updated: 2022/04/06 15:35:54 by lporras-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n)
	{
		((unsigned char *)s)[i] = 0;
		i++;
	}
}

/*#include <stdio.h>
#include <strings.h>
#include <stddef.h>
#include <unistd.h>

int	main(void)
{
	unsigned char a[] = "hola mundo";
	size_t	n;

	n = 5;
	ft_bzero(a, n);
	printf("mi función;%c\n", a[5]);
}

int	main(void)
{
	unsigned char a[] = "hola mundo";
	size_t	n;

	n = 5;
	ft_bzero(a, n);
	write (1, &a, 11);
	printf("mi función;%s\n", (a));
}*/