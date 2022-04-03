/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lporras- <lporras-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/30 17:22:04 by lporras-          #+#    #+#             */
/*   Updated: 2022/03/30 18:25:01 by lporras-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
//#include <string.h>

int	ft_isdigit(int a);

int	main(void)
{
	int	x;
	char	b[] = "15af5*0";
	for(x = 0; b[x]; x++)
		printf("%c, %d\n", b[x], ft_isdigit(b[x]));
}

int	ft_isdigit(int a)
{
	if (a >= 48 && a <= 57)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
