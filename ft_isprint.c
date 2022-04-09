/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lporras- <lporras-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/01 17:00:07 by lporras-          #+#    #+#             */
/*   Updated: 2022/04/06 15:36:55 by lporras-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isprint(int a)
{
	if (a >= 32 && a <= 126)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}

/*#include <stdio.h>
#include <ctype.h>

int	ft_isprint(int a);

int	main(void)
{
	int	a;

	a = '2';
	printf("%d", ft_isprint(a));
}
*/