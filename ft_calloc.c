/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lporras- <lporras-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/26 16:13:20 by lporras-          #+#    #+#             */
/*   Updated: 2022/04/26 20:15:03 by lporras-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	void	*d;

	d = malloc(size * count);
	if (!d)
		return (0);
	ft_memset(d, 0, (size * count));
	return (d);
}

/* 
void	*ft_calloc(size_t count, size_t size);
void	*ft_memset(void *b, int c, size_t len);

int	main(void)
{
	int	*calloc_test;
	int	*calloc_test1;
	printf("Calloc an array of 6 int\n    ");
	printf("\n---- calloc funcion creada ----\n");
	calloc_test = (int *)ft_calloc(6, sizeof(int));
	for(int i = 0; i < 6; i++)
		printf("%d ", calloc_test[i]);
	printf("\n---- calloc original----\n");
	calloc_test1 = (int *)calloc(6, sizeof(int));
	for(int i = 0; i < 6; i++)
		printf("%d ", calloc_test1[i]);
	printf("\n");
	free(calloc_test);
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
}*/