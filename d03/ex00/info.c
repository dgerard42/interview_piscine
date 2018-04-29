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

// void				recurse(struct s_node *root, struct s_info *info, int height)
// {
// 	info->elements++;
// 	if (root->value < info->min)
// 		info->min = root->value;
// 	if (root->value > info->max)
// 		info->max = root->value;
// 	if (root->right != NULL)
// 	{
// 		height++;
// 		recurse(root->right, info, height);
// 	}
// 	else
// 		if (height > info->height)
// 			info->height = height;
// 	if (root->left != NULL)
// 	{
// 		height++;
// 		recurse(root->left, info, height);
// 	}
// 	else
// 		if (height > info->height)
// 			info->height = height;
// }
void				getMin(struct s_node *root, struct s_info *info)
{
	if (root->right != NULL)
		getMin
	if (root->left != NULL)

}

int					getMax(struct s_node *root)
{

}

int					countElems(struct s_node *root)
{

}

int					getHeight(struct s_node *root)
{

}

int					isBst(struct s_node *root)
{

}

int					isBalanced(struct s_node *root)
{

}

struct s_info		getInfo(struct s_node *root)
{
	struct s_info *info;

	if (!(info = (struct s_info*)malloc(sizeof(struct s_info))))
		return (NULL);
	bzero(info, sizeof(struct s_info));
	getMin()
	return (*info);
}
