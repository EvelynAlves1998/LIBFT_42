/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ealves-d < ealves-d@student.42sp.org.br    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/25 18:37:56 by ealves-d          #+#    #+#             */
/*   Updated: 2021/06/25 18:37:56 by ealves-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

static int	ft_countwords(char const *s, char c)
{
	unsigned int	i;
	int				cp;

	i = 0;
	cp = 0;
	while (s[i])
	{
		while (s[i] == c)
			i++;
		if (s[i] != '\0')
			cp++;
		while (s[i] && (s[i] != c))
			i++;
	}
	if (cp == 0)
		return (1);
	return (cp);
}

static	char	*ft_strndup(const char *s, size_t n)
{
	char			*r;
	unsigned int	i;

	i = 0;
	r = malloc(sizeof(char) * (n + 1));
	if (!r)
		return (NULL);
	while (i < n)
	{
		r[i] = s[i];
		i++;
	}
	r[i] = '\0';
	return (r);
}

char	**ft_split(char const *s, char c)
{
	int				i;
	int				j;
	int				k;
	char			**p;

	i = 0;
	k = 0;
	p = (char **)malloc(sizeof(char *) * (ft_countwords(s, c) + 1));
	if (!p)
		return (NULL);
	while (s[i])
	{
		while (s[i] == c)
			i++;
		j = i;
		while (s[i] && s[i] != c)
			i++;
		if (i > j)
		{
			p[k] = ft_strndup(s + j, i - j);
			k++;
		}
	}
	p[k] = NULL;
	return (p);
}
