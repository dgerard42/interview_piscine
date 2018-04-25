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

void			printReverse(struct s_node *lst)
{
	if (lst->next != NULL)
		printReverse(lst->next);
	printf("%s ", lst->word);
	//how the fuck to get newline?
}
