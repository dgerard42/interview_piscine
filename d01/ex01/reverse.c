/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reverse.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dgerard <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/25 12:24:40 by dgerard           #+#    #+#             */
/*   Updated: 2018/04/25 12:24:41 by dgerard          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

void			recurse(struct s_node *lst)
{
	if (lst->next != NULL)
		recurse(lst->next);
	printf("%s ", lst->word);
}

void			printReverse(struct s_node *lst)
{
	recurse(lst);
	printf("\n");
}
