/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front_bonus.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lporras- <lporras-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/18 18:46:52 by lporras-          #+#    #+#             */
/*   Updated: 2022/05/20 19:05:23 by lporras-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_front(t_list **lst, t_list *new)
{
	if (!new)
		return ;
	if (!lst)
	{
		*lst = new;
		return ;
	}
	new->next = *lst;
	*lst = new;
}

/*t_list	*ft_lstnew(void *content)
{
	t_list	*new;

	new = (t_list *)malloc(sizeof(t_list));
	if (!new)
		return (0);
	new->content = content;
	new->next = NULL;
	return (new);
}

void	ft_lstadd_front(t_list **list, t_list *new);
t_list	*ft_lstnew(void *content);

int	main(void)
{
	t_list	*a;
	t_list	*b;
	t_list	*c;
	t_list	*d;

	a = ft_lstnew("luz");
	b = ft_lstnew("feliz");
	c = ft_lstnew("día");
	

	printf("%s-%s-%s-%s\n", a->content, b->content, c->content);
	a->next = b;
	b->next = c;
	c->next = NULL;
	d = ft_lstnew("hola");
	ft_lstadd_front(&a, d);
	while (a)
	{
		printf("%s", a->content);
		a = a->next;
	}
}
*/