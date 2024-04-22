/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alaalalm <alaalalm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/06 17:32:01 by alaalalm          #+#    #+#             */
/*   Updated: 2023/11/11 21:20:08 by alaalalm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	digit_count(int n)
{
	int	digit;

	digit = !n;
	while (n != 0)
	{
		n /= 10;
		digit++;
	}
	return (digit);
}

char	*ft_itoa(int n)
{
	int		sign;
	int		d_count;
	char	*result;

	sign = n < 0;
	d_count = digit_count(n) + sign;
	result = (char *)malloc(sizeof(char) * (d_count + 1));
	if (!result)
		return (result);
	result[d_count] = 0;
	if (sign)
	{
		*result = '-';
		result[--d_count] = -(n % 10) + '0';
		n = -(n / 10);
	}
	while (d_count-- - sign)
	{
		result[d_count] = n % 10 + '0';
		n /= 10;
	}
	return (result);
}
