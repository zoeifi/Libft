/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lporras- <lporras-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/01 17:00:07 by lporras-          #+#    #+#             */
/*   Updated: 2022/04/01 17:28:36 by lporras-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <ctype.h>

int	ft_isprint(int a);

int	main(void)
{
	int	a;

	a = '2';
	printf("%d", ft_isprint(a));
}

int	ft_isprint(int a)
{
	if (a >= 32 && a <= 127)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
