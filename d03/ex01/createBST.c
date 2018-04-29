/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   createBST.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dgerard <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/27 14:09:22 by dgerard           #+#    #+#             */
/*   Updated: 2018/04/27 14:09:23 by dgerard          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

struct s_node		*makeNode()
{
	struct	s_node	*new_node;

	if (!(new_node = (struct s_node*)malloc(sizeof(struct s_node))))
		new_node = NULL;
	bzero(info, sizeof(struct s_info));
	return(new_node);
}

void				recurse(struct s_node *head_node, int *arr, int left, int right)
{
	head_node = makeNode();
	head_node->value = arr[n / 2];
	if (n - (n / 2) >= 0)
		new_node->left = recurse(arr, n - (n / 2), max);
	else if (n + (n / 2) < max)
		new_node->right = recurse(arr, n + (n / 2), max);
}

struct s_node		*createBST(int *arr, int n, int max)
{
	*head_node;
	recurse(head_node, arr, n, max)
