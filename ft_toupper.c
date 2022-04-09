/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lporras- <lporras-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/03 12:35:44 by lporras-          #+#    #+#             */
/*   Updated: 2022/04/06 15:37:34 by lporras-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_toupper(int c)
{
	if (c >= 97 && c <= 122)
	{
		c = c - 32;
	}
	return (c);
}

/*#include <ctype.h>
#include <stdio.h>

int	ft_toupper(int c);

int	main(void)
{
	int	a;

	a = '*';
	printf("la letra en mayuscula es %c \n", toupper(a));
	printf("la letra en mayuscula es %c \n", ft_toupper(a));
}*/