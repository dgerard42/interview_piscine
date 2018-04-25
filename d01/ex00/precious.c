/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   precious.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dgerard <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/24 17:11:53 by dgerard           #+#    #+#             */
/*   Updated: 2018/04/24 17:11:54 by dgerard          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

struct s_node			*create_ring(char *ascii)
{
	struct	s_node	*ring;
	struct	s_node	*new_node;
	struct	s_node	*first_node;

	ring = NULL;
	while (*ascii != '\0')
	{
		if (!(new_node = (struct s_node*)malloc(sizeof(struct s_node))))
			return (NULL);
		bzero(new_node, sizeof(struct s_node));
		new_node->c = *ascii;
		if (ring != NULL)
		{
			new_node->prev = ring->prev;
			new_node->next = ring;
			ring->prev = new_node;
		}
		else
		{
			new_node->prev = new_node;
			new_node->next = new_node;
			first_node = new_node;
		}
		ring = new_node;
		ascii++;
	}
	first_node->next = new_node;
	return (ring);
}

char			*precious(int *text, int size)
{
	char			*message;
	struct s_node	*ring;

	if (!(message = (char *)calloc(size, sizeof(char))))
		return (NULL);
	ring = create_ring(CS);
	ring = ring->prev;
	for (int i = 0; i < size; i++)
	{
		for (int x = 0; x < text[i]; x++){
			ring = ring->prev;
		}
		for (int y = 0; y > text[i]; y--){
			ring = ring->next;
		}
		message[i] = ring->c;
	}
	return (message);
}
