/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   console.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dgerard <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/25 19:31:51 by dgerard           #+#    #+#             */
/*   Updated: 2018/04/25 19:31:52 by dgerard          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

struct s_stack	*initStack(void)
{
	struct	s_stack	*new_stack;

	if (!(new_stack = (struct s_stack*)malloc(sizeof(struct s_stack))))
		return (NULL);
	bzero(new_stack, sizeof(struct s_stack));
	return (new_stack);
}

int				pop(struct s_stack *stack)
{
	struct	s_item	*top_elem;

	top_elem = stack->item;
	stack->item = (stack->item)->next;
	return (top_elem->idx);
}

void			push(struct s_stack *stack, int idx)
{
	struct	s_item	*new_elem;

	if (!(new_elem = (struct s_item*)malloc(sizeof(struct s_item))))
		new_elem = NULL;
	bzero(new_elem, sizeof(struct s_item));
	new_elem->idx = idx;
	new_elem->next = stack->item;
	stack->item = new_elem;
}

char			*console()
{
	int				index;
	char			*input;
	char			*message;
	size_t			characters;
	size_t			buff_size = 255;
	struct s_stack	*shtack = initStack();

	if (!(input = (char *)calloc(buff_size, sizeof(char))))
		return (NULL);
	if (!(message = (char *)calloc(buff_size, sizeof(char))))
		return (NULL);
	while (strcmp(input, "SEND\n"))
	{
		printf("spacecheap@syldavia:");
		characters = getline(&input, &buff_size, stdin);
		if (!(strcmp(input, "UNDO\n")))
		{
			index = pop(shtack);
			message[index] = '\n';
			for(int i = index + 1; message[i] != '\0'; i++)
				message[i] = '\0';
		}
		else if (strcmp(input, "SEND\n"))
		{
			push(shtack, strlen(message));
			for(int i = 0; message[i] != '\0' && i < (int)strlen(message); i++)
				if (message[i] == '\n')
					message[i] = '\0';
			strcat(message, input);
		}
		printf("%s\n", message);
	}
	return(message);
}
