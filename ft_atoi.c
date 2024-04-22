/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alaalalm <alaalalm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/01 16:23:44 by alaalalm          #+#    #+#             */
/*   Updated: 2023/11/18 12:05:46 by alaalalm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	check_num(unsigned long *numbers, int *count, int *msigns)
{
	if (*count >= 20)
	{
		if (*msigns == 1)
			return (-1);
		return (0);
	}
	return (*numbers * *msigns);
}

int	ft_atoi(const char *str)
{
	unsigned long	numbers;
	int				msigns;
	int				count;

	numbers = 0;
	msigns = 1;
	count = 0;
	while ((*str >= 9 && *str <= 13) || *str == 32)
		str++;
	if (*str == '-' || *str == '+')
	{
		if (*str == '-')
			msigns = -msigns;
		str++;
	}
	while (*str == '0')
		str++;
	while (*str >= 48 && *str <= 57)
	{
		numbers = numbers * 10 + (*str - 48);
		str++; 
		count++;
	}
	return (check_num(&numbers, &count, &msigns));
}
