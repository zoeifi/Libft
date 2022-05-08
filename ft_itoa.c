/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lporras- <lporras-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/08 12:29:18 by lporras-          #+#    #+#             */
/*   Updated: 2022/05/08 17:04:19 by lporras-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*#include<stddef.h>
#include<stdio.h>
#include<unistd.h>
#include<ctype.h>
#include<stdlib.h>
#include<string.h>

char		*ft_itoa(int n);
static int	ft_length(int n_len);

int	main(void)
{
	int		n;
	int		i;
	char	*output;

	n = -1234;
	i = 0;
	output = ft_itoa(n);
	while (output[i])
	{
		write (1, &output[i], 1);
		i++;
	}
	free(output);
	return (0);
}*/

#include "libft.h"

static int	ft_length(int n_len)
{
	int	len;

	len = 1;
	while (n_len / 10 != 0)
	{
		len++;
		n_len = n_len / 10;
	}
	if (n_len < 0)
		len = len + 1;
	return (len);
}

char	*ft_itoa(int n)
{
	char	*strnum;
	int		i;
	int		str_len;
	long	an;

	an = n;
	str_len = ft_length(an);
	strnum = (char *)malloc(sizeof(char) * (str_len + 1));
	if (!(strnum))
		return (NULL);
	strnum[str_len] = '\0';
	i = 0;
	if (an < 0)
	{
		strnum[i] = '-';
		an = an * -1;
	}
	if (an == 0)
		strnum[0] = '0';
	while (an > 0)
	{
		strnum[str_len - i++ - 1] = an % 10 + '0';
		an = an / 10;
	}
	return (strnum);
}
