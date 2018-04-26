/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   insertionSort.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dgerard <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/26 13:38:35 by dgerard           #+#    #+#             */
/*   Updated: 2018/04/26 13:38:37 by dgerard          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

void		insertFront(struct s_player **players, int player, int lower)
{
	struct	s_player	tmp;

	tmp = *players[lower];
	*players[lower] = *players[player];
	for (int place = lower + 1; place <= player; place++)
	{
		*players[player] = *players[place];
		*players[place] = tmp;
		tmp = *players[player];
	}
}

void		insertionSort(struct s_player **players)
{
	for (int player = 0; players[player] != NULL; player++)
		for (int lower = 0; lower <= player; lower++)
			if (players[lower]->score > players[player]->score)
				insertFront(players, player, lower);
}
