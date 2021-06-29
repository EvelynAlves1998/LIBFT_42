/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ealves-d < ealves-d@student.42sp.org.br    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/26 13:58:28 by ealves-d          #+#    #+#             */
/*   Updated: 2021/06/26 13:58:28 by ealves-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*p;
	size_t	f;
	size_t	e;

	p = 0;
	if (s1 != 0 && set != 0)
	{
		f = 0;
		e = ft_strlen(s1);
		while (s1[f] && ft_strchr(set, s1[f]))
			f++;
		while (s1[e - 1] && ft_strchr(set, s1[e - 1]) && e > f)
			e--;
		p = (char *)malloc(sizeof(char) * (e - f + 1));
		if (p)
			ft_strlcpy(p, &s1[f], e - f + 1);
	}
	return (p);
}
