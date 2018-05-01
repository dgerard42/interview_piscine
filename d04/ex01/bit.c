/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bit.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daniella <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/30 16:49:17 by daniella          #+#    #+#             */
/*   Updated: 2018/04/30 16:49:27 by daniella         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

#define BITS 4

char	*ifInverse(char *bits)
{
	bits++;
	for(int i = 0; i < BITS; i++)
		bits[i] = (bits[i] == '1') ? '0' : '1';
	return (bits);
}

char	*getAnd(char *a, char *b)
{
	char	*ret;

	if(!(ret = (char *)calloc(BITS, sizeof(char))))
		return (NULL);
	if (a[0] == '~')
		a = ifInverse(a);
	if (b[0] == '~')
		b  = ifInverse(b);
	for (int i = BITS - 1; i >= 0; i--)
	{
		if (a[i] == '0' && b[i] == '0')
			ret[i] = '0';
		else if (a[i] == '1' && b[i] == '1')
			ret[i] = '1';
		else if (a[i] == '1' || b[i] == '1')
			ret[i] = '0';
	}
	return (ret);
}

char	*getOr(char *a, char *b)
{
	char	*ret;

	if(!(ret = (char *)calloc(BITS, sizeof(char))))
		return (NULL);
	if (a[0] == '~')
		a = ifInverse(a);
	if (b[0] == '~')
		b  = ifInverse(b);
	for (int i = BITS - 1; i >= 0; i--)
	{
		if (a[i] == '0' && b[i] == '0')
			ret[i] = '0';
		else if (a[i] == '1' && b[i] == '1')
			ret[i] = '1';
		else if (a[i] == '1' || b[i] == '1')
			ret[i] = '1';
	}
	return(ret);
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
