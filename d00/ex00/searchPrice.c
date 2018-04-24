/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   searchPrice.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dgerard <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/24 11:10:39 by dgerard           #+#    #+#             */
/*   Updated: 2018/04/24 11:14:09 by dgerard          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

int				searchPrice(struct s_art **arts, char *name)
{
	int i;

	i = 0;
	while (arts[i] != 0 && strcmp(arts[i]->name, name) != 0)
		i++;
	return ((arts[i] != 0) ? arts[i]->price : -1);
}
