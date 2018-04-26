/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sortStone.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dgerard <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/26 11:54:54 by dgerard           #+#    #+#             */
/*   Updated: 2018/04/26 11:54:55 by dgerard          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

void			swapSize(struct s_stone *nodeA, struct s_stone *nodeB)
{
	int		tmp;

	tmp = nodeA->size;
	nodeA->size = nodeB->size;
	nodeB->size = tmp;
}

void			sortStones(struct s_stone **stone)
{
	struct	s_stone	*rock;
	struct	s_stone	*pebble;
	bool	swapped;

	rock = *stone;
	pebble = *stone;
	while (rock != NULL)
	{
		swapped = false;
		pebble = *stone;
		while (pebble->next != NULL)
		{
			if (pebble->size > (pebble->next)->size)
			{
				swapSize(pebble, pebble->next);
				swapped = true;
			}
			pebble = pebble->next;
		}
		rock = rock->next;
		if (swapped == false)
			break;
	}
}
