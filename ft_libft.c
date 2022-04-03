/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_libft.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lporras- <lporras-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/29 16:48:52 by lporras-          #+#    #+#             */
/*   Updated: 2022/03/30 17:52:02 by lporras-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
//#include <string.h>

int	ft_libft(int a);

int	main(void)
{
	int	x;
	char	b[] = "5af5*";
	for(x = 0; b[x]; x++)
		printf("%c, %d\n", b[x], ft_libft(b[x]));
}

int	ft_libft(int a)
{
	if ((a >= 64 && a <= 90) || (a >= 97 && a <= 122))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
