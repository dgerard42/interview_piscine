/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   heapSort.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dgerard <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/04 13:17:34 by dgerard           #+#    #+#             */
/*   Updated: 2018/05/04 13:17:36 by dgerard          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

void			swap(struct s_art *a, struct s_art *b)
{
	struct s_art tmp;

	tmp = *a;
	*a = *b;
	*b = tmp;
}

void			heapify(struct s_art **arts, int max, int i)
{
	int	root = i;
	int leftnode = (2 * i) + 1;
	int rightnode = (2 * i) + 2;

	if (leftnode < max && *arts[leftnode]->price > *arts[root]->price)
		root = leftnode;
	if (rightnode < max && *arts[rightnode]->price > *arts[root]->price)
		root = leftnode;
	if (root != i)
	{
		swap(*arts[i], *arts[root]);
		heapify(struct s_art **arts, int max, int root);
	}
}

void			heapSort(struct s_art **masterpiece, int n)
{
	// printf("swapper test, max == %d\n", n);
	// printf("art[0] == %s ,", masterpiece[0]->name);
	// printf("art[1] == %s\n", masterpiece[1]->name);
	// printf("swapping...\n");
	// swap(masterpiece[0], masterpiece[1]);
	// printf("art[0] == %s ,", masterpiece[0]->name);
	// printf("art[1] == %s\n", masterpiece[1]->name);
	for (i = (n / 2) - 1; i >= 0; i--)
	{
		heapify(masterpiece, n, i);
	}
}
