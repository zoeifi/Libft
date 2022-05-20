/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lporras- <lporras-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/13 14:15:16 by lporras-          #+#    #+#             */
/*   Updated: 2022/05/13 14:42:05 by lporras-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putstr_fd(char *s, int fd)
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
}

/*size_t	ft_strlen(const char *str)
{
	size_t	i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}

int	main(void)
{
	char	*a;
	int		fd;

	a = "luz";
	fd = 1;
	ft_putstr_fd(a, fd);
}

#include<stdio.h>
#include<unistd.h>
#include<ctype.h>
#include<stdlib.h>
#include<string.h>

void	ft_putstr_fd(char *s, int fd);
size_t	ft_strlen(const char *str);

void	ft_putstr_fd(char *s, int fd)
{
	if (!s)
		write (fd, s, ft_strlen(s));
}
*/