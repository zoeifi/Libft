/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lporras- <lporras-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/30 17:44:19 by lporras-          #+#    #+#             */
/*   Updated: 2022/03/30 17:58:57 by lporras-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_isalnum(int a);

int	main(void)
{
	int	x;
	char	b[] = "5af5*";
	for(x = 0; b[x]; x++)
		printf("%c, %d\n", b[x], ft_isalnum(b[x]));
}

int	ft_isalnum(int a)
{
	if (((a >= 64 && a <= 90) || (a >= 97 && a <= 122))
		|| (a >= 48 && a <= 57))
	{
		return (1);
	}
	return (0);
}
