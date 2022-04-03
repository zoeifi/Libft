/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lporras- <lporras-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/03 13:09:32 by lporras-          #+#    #+#             */
/*   Updated: 2022/04/03 13:35:18 by lporras-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ctype.h>
#include <stdio.h>

int	ft_tolower(int c);

int	main(void)
{
	int	a;

	a = 'B';
	printf("el valor en mayusculas de la funcion es: %c\n", tolower(a));
	printf("el valor en mayusculas de mi funcion es: %c\n", ft_tolower(a));
}

int	ft_tolower(int c)
{
	if (c >= 65 && c <= 90)
	{
		c = c + 32;
	}
	return (c);
}
