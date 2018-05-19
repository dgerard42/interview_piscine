/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   shift.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daniella <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/30 20:11:35 by daniella          #+#    #+#             */
/*   Updated: 2018/04/30 20:11:37 by daniella         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

#define BITS 6

char	*rightShift(char *bin, int k)
{
	int i = BITS - 1;
	char *ret;

	if(!(ret = (char *)calloc(BITS, sizeof(char))))
		return (NULL);
	while (i - k >= 0 && i >= (BITS - 1) - k)
	{
		ret[i] = bin[i - k];
		i--;
	}
	while (i >= 0)
	{
		ret[i] = '1';
		i--;
	}
	return (ret);
}

char	*leftShift(char *bin, int k)
{
	int i = 0;
	char *ret;

	if(!(ret = (char *)calloc(BITS, sizeof(char))))
		return (NULL);
	while (i + k < BITS)
	{
		ret[i] = bin[i + k];
		i++;
	}
	while (i < BITS)
	{
		ret[i] = '0';
		i++;
	}
	return (ret);
}

int			toInt(char *bits)
{
	int	res = 0;
	int base = 1;

	for (int i = BITS - 1; i >= 0; i--)
	{
		base *= 2;
		res += (base * (bits[i] - 48));
	}
	return (res);
}
