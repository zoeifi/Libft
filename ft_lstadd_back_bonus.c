/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back_bonus.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lporras- <lporras-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/20 15:01:04 by lporras-          #+#    #+#             */
/*   Updated: 2022/05/20 19:05:44 by lporras-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*aux;

	if (!new)
		return ;
	if (!*lst)
	{
		*lst = new;
		return ;
	}
	aux = ft_lstlast(*lst);
	aux->next = new;
}

/*int	main(void)
{
	t_list	*p1;
	t_list	*p2;
	t_list	*p3;
	t_list	*nbc;
	nbc = ft_lstnew("AMARILLO");
	p1 = ft_lstnew("Hola ");
	p2 = ft_lstnew("que ");
	p3 = ft_lstnew("tal ");
	p1->next = p2;
	p2->next = p3;
	p3->next = NULL;
	ft_lstadd_back(&p1, nbc);
	while (p1)
	{
		printf("%s", p1->content);
		p1 = p1->next;
	}
}
*/