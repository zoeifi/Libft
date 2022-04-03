/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lporras- <lporras-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/30 18:25:14 by lporras-          #+#    #+#             */
/*   Updated: 2022/04/01 16:59:08 by lporras-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <ctype.h>
/*
int	main(void)
{
	printf("es un valor ascii: %d\n", isascii(0));
	return (0);
}*/

int	ft_isascii(int a);

int	main(void)
{
	/* int	x;
	char	b[] = "5af5*á";
	x = 0;
	while (b[x])
	{
		printf("%c, %d\n", b[x], ft_isascii(b[x]));
		x++;
	}*/
	printf("%d\n", ft_isascii(128));
}

int	ft_isascii(int a)
{
	if (a >= 128)
	{
		return (0);
	}
	else
	{
		return (1);
	}
}
