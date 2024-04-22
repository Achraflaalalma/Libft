/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alaalalm <alaalalm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/01 17:07:19 by alaalalm          #+#    #+#             */
/*   Updated: 2023/11/03 23:40:10 by alaalalm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	size_t	slen;
	char	*new_s1;

	slen = ft_strlen(s1);
	new_s1 = (char *)malloc(sizeof(char) * (slen + 1));
	if (new_s1 == NULL)
		return (NULL);
	ft_strlcpy(new_s1, s1, slen + 1);
	return (new_s1);
}
