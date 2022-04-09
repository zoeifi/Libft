/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lporras- <lporras-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/06 19:08:31 by lporras-          #+#    #+#             */
/*   Updated: 2022/04/09 14:21:25 by lporras-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stddef.h>

size_t	ft_strlcpy(char * dst, const char * src, size_t dstsize);

//size_t	ft_strlcat(char * dst, const char * src, size_t dstsize);

int	main(void)
{
	char	src[]= "buenas tardes";
	char	dst[] = "8888";
	size_t			dstsize;

	dstsize = 5;
	printf("%s\n", strlcpy(dest, src, destsize));
	//printf("%s\n", memmove(dest, src, len));
}

/*size_t	ft_strlcpy(char * dst, const char * src, size_t dstsize)
{
	size_t	i;
	size_t	j;
	if ()
}*/
