/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lporras- <lporras-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/29 16:48:52 by lporras-          #+#    #+#             */
/*   Updated: 2022/04/06 15:36:25 by lporras-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalpha(int a)
{
	if ((a >= 65 && a <= 90) || (a >= 97 && a <= 122))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}

/*#include <stdio.h>
#include <string.h>

int	ft_isalpha(int a);

int	main(void)
{
	int	x;
	char	b[] = "5af5*";
	for(x = 0; b[x]; x++)
		printf("%c, %d\n", b[x], ft_isalpha(b[x]));
}*/