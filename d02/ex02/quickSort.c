/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   quickSort.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dgerard <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/26 16:45:37 by dgerard           #+#    #+#             */
/*   Updated: 2018/04/26 16:45:39 by dgerard          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

void			swapEm(struct s_player **players, int left, int right)
{
	struct	s_player	tmp;

	tmp = *players[left];
	*players[left] = *players[right];
	*players[right] = tmp;
}

int				pivotDatShit(struct s_player **players, int left, int right)
{
	int pivot = players[(left + right) / 2]->score;
	while (left <= right)
	{
		while (players[left]->score > pivot)
			left++;
		while (players[right]->score < pivot)
			right--;
		if (left <= right)
		{
			swapEm(players, left, right);
			left++;
			right--;
		}
	}
	return left;
}

void			recurse(struct s_player **players, int left, int right)
{
	int pivot = pivotDatShit(players, left, right);
	if (left < pivot - 1)
		recurse(players, left, pivot - 1);
	if (right > pivot)
		recurse(players, pivot, right);
}

int				listlen(struct s_player **players)
{
	int len = 0;
	while(players[len] != NULL)
		len++;
	return (len);
}

void			quickSort(struct s_player **players)
{
	int len = listlen(players);
	recurse(players, 0, len - 1);
}
