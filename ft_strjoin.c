/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alaalalm <alaalalm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/02 13:17:21 by alaalalm          #+#    #+#             */
/*   Updated: 2023/11/14 19:24:02 by alaalalm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	int		total_lenght;
	char	*strjoin;

	if (s1 == NULL || s2 == NULL)
		return (NULL);
	total_lenght = ft_strlen(s1) + ft_strlen(s2) + 1;
	strjoin = (char *)malloc(sizeof(char) * total_lenght);
	if (!strjoin)
		return (NULL);
	ft_strlcpy(strjoin, s1, total_lenght);
	ft_strlcat(strjoin, s2, total_lenght);
	return (strjoin);
}
