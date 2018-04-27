/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   info.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dgerard <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/27 12:33:40 by dgerard           #+#    #+#             */
/*   Updated: 2018/04/27 12:33:41 by dgerard          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

void				recurse(struct s_node *root, struct s_info *info, int height)
{
	info->elements++;
	if (root->value < info->min)
		info->min = root->value;
	if (root->value > info->max)
		info->max = root->value;
	if (root->right != NULL)
	{
		height++;
		recurse(root->right, info, height);
	}
	else
		if (height > info->height)
			info->height = height;
	if (root->left != NULL)
	{
		height++;
		recurse(root->left, info, height);
	}
	else
		if (height > info->height)
			info->height = height;
}

struct s_info		getInfo(struct s_node *root)
{
	struct s_info *info;

	if (!(info = (struct s_info*)malloc(sizeof(struct s_info))))
		printf("malloc error\n");
	bzero(info, sizeof(struct s_info));
	info->min =  2147483647;
	recurse(root, info, 0);
	return (*info);
}
