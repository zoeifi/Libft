/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lporras- <lporras-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/26 17:49:42 by lporras-          #+#    #+#             */
/*   Updated: 2022/05/02 17:20:23 by lporras-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	unsigned int	a;
	char			*b;

	a = ft_strlen(s);
	b = malloc((a + 1) * sizeof(char));
	if (b == NULL)
		return (NULL);
	ft_memmove(b, s, (a + 1));
	return (b);
}
