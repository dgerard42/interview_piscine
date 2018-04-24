/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sortArts.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dgerard <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/24 12:26:51 by dgerard           #+#    #+#             */
/*   Updated: 2018/04/24 12:26:52 by dgerard          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"
#include <stdio.h>


void			swap_elems(struct s_art **arts, int a, int b)
{

}

void			pivot_shit(struct s_art **arts, int start, int end)
{
	int index = -1;
	int pivot = arts[end];
	while (index++ < end)
	{
		
	}

}

void			quicksort(struct s_art **arts, int start, int end)
{
	int pivot;

	if (start >= end)
	{
		pivot = pivot_shit();
		quicksort(arts, start, pivot - 1);
		quicksort(arts, pivot + 1, end);
	}
}

void			sortArts(struct s_art **arts)
{
	for (int end = 0; arts[end]; end++)
	quicksort(arts, 0, end);
}
