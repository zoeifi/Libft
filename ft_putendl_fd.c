/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lporras- <lporras-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/13 14:55:35 by lporras-          #+#    #+#             */
/*   Updated: 2022/05/13 15:48:30 by lporras-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putendl_fd(char *s, int fd)
{
	unsigned int	i;
	unsigned int	len;

	i = 0;
	len = ft_strlen(s);
	while (i < len)
	{
		write(fd, &s[i], 1);
		i++;
	}
	write(fd, "\n", 1);
}

/*
#include<stdio.h>
#include<unistd.h>
#include<ctype.h>
#include<stdlib.h>
#include<string.h>

void	ft_putendl_fd(char *s, int fd);
size_t	ft_strlen(const char *str);

int	main(void)
{
	char	*a;
	int		fd;

	a = "luz";
	fd = 1;
	ft_putendl_fd(a, fd);
}

void	ft_putstr_fd(char *s, int fd)
{
	if (!s)
	{
		write (fd, s, ft_strlen(s));
		write(fd, "\n", 1);
	}
}

size_t	ft_strlen(const char *str)
{
	size_t	i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}
*/