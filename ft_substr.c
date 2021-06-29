/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ealves-d < ealves-d@student.42sp.org.br    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/26 13:58:44 by ealves-d          #+#    #+#             */
/*   Updated: 2021/06/26 13:58:44 by ealves-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*new_s;
	size_t	size;
	size_t	s_size;
	size_t	start_s;

	if (!s)
		return (NULL);
	start_s = start;
	s_size = ft_strlen(s);
	if (start > s_size)
	{
		size = 1;
		start_s = 0;
	}
	else if (start + len > s_size)
		size = s_size - start + 1;
	else
		size = len + 1;
	new_s = malloc(size);
	if (!new_s)
		return (NULL);
	ft_strlcpy(new_s, s + start_s, size);
	return (new_s);
}
