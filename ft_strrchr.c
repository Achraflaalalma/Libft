/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alaalalm <alaalalm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/01 15:14:38 by alaalalm          #+#    #+#             */
/*   Updated: 2023/11/07 15:00:25 by alaalalm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int	i;
	int	last;
	int	c_found;

	i = 0;
	c_found = 0;
	while (s[i] != '\0')
	{
		if (s[i] == (char)c)
		{
			last = i;
			c_found = 1;
		}
		i++;
	}
	if (c_found)
		return ((char *)(s + last));
	if ((char )c == '\0')
		return ((char *)(s + i));
	return (NULL);
}
