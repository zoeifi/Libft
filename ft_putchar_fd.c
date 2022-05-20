/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lporras- <lporras-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/10 20:27:24 by lporras-          #+#    #+#             */
/*   Updated: 2022/05/13 14:41:41 by lporras-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putchar_fd(char c, int fd)
{
	write(fd, &c, 1);
}

/*#include<unistd.h>
#include<ctype.h>
#include<stdlib.h>
#include<string.h>

void	ft_putchar_fd(char c, int fd);

int	main(void)
{
	char	c;
	int		fd;

	c = 'a';
	fd = 1;
	ft_putchar_fd(c, fd);
}*/
