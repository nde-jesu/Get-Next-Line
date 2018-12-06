/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nde-jesu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/12 16:52:33 by nde-jesu          #+#    #+#             */
/*   Updated: 2018/11/16 09:06:19 by nde-jesu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

static char		*ret_alloc(int i, int j)
{
	char *ret;

	if (i > j)
	{
		if (!(ret = ft_strnew(1)))
			return (NULL);
	}
	else
	{
		if (!(ret = ft_strnew((j - i) + 1)))
			return (NULL);
	}
	return (ret);
}

char			*ft_strtrim(char const *s)
{
	int		i;
	int		j;
	int		k;
	char	*ret;

	if (!s)
		return (NULL);
	i = 0;
	while (s[i] == ' ' || s[i] == ',' || s[i] == '\n' || s[i] == '\t')
		++i;
	j = 0;
	while (s[j])
		++j;
	--j;
	while (s[j] == ' ' || s[j] == ',' || s[j] == '\n' || s[j] == '\t')
		--j;
	if ((ret = ret_alloc(i, j)) == NULL)
		return (NULL);
	k = -1;
	--i;
	while (++i <= j)
		ret[++k] = s[i];
	ret[++k] = '\0';
	return (ret);
}
