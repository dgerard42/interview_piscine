/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   decrypt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daniella <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/30 12:50:00 by daniella          #+#    #+#             */
/*   Updated: 2018/04/30 12:50:02 by daniella         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

#define	BITS 6

char		*getSum(char *a, char *b)
{
	char	*sum;
	int		carry = 0;

	if(!(sum = (char *)calloc(BITS, sizeof(char))))
		return (NULL);
	for (int i = BITS - 1; i >= 0; i--)
	{
		if(a[i] == '0' && b[i] == '0')
		{
			sum[i] = (carry == 0) ? '0' : '1';
			carry = 0;
		}
		else if((a[i] == '1' && b[i] == '0') || (a[i] == '0' && b[i] == '1'))
			sum[i] = (carry == 0) ? '1' : '0';
		else if (a[i] == '1' && a[i] == '1')
		{
			sum[i] = (carry = 0) ? '1' : '0';
			carry = 1;
		}
	}
	return (sum);
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
