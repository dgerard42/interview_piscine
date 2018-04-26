/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reverseV2.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dgerard <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/25 12:48:31 by dgerard           #+#    #+#             */
/*   Updated: 2018/04/25 12:48:32 by dgerard          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

struct s_stack	*stackInit(void)
{
	struct	s_stack	*new_stack;

	if (!(new_stack = (struct s_stack*)malloc(sizeof(struct s_stack))))
		return (NULL);
	bzero(new_stack, sizeof(struct s_stack));
	return (new_stack);
}

void			*pop(struct s_stack *stack)
{
	void	*top_elem;

	top_elem = (void *)stack->item;
	stack->item = (stack->item)->next;
	return (top_elem);
}

void			push(struct s_stack *stack, char *word)
{
	struct	s_item	*new_elem;

	if (!(new_elem = (struct s_item*)malloc(sizeof(struct s_item))))
		new_elem = NULL;
	bzero(new_elem, sizeof(struct s_item));
	new_elem->word = word;
	new_elem->next = stack->item;
	stack->item = new_elem;

}

void			printReverseV2(struct s_node *lst)
{
	struct	s_stack	*whack;

	whack = stackInit();
	while (lst->next != NULL)
	{
		push(whack, lst->word);
		lst = lst->next;
	}
	push(whack, lst->word);
	while (whack->item != NULL)
		printf("%s ", ((struct s_item *)pop(whack))->word);
	printf("\n");
}
