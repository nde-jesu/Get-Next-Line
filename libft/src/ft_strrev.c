/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrev.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nde-jesu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/15 08:34:33 by nde-jesu          #+#    #+#             */
/*   Updated: 2018/11/16 10:46:22 by nde-jesu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strrev(char const *s)
{
	int		i;
	int		j;
	char	*ret;

	if (!s)
		return (NULL);
	i = 0;
	j = 0;
	while (s[i])
		++i;
	if (!(ret = (char*)malloc(sizeof(char) * (i + 1))))
		return (NULL);
	--i;
	while (i >= 0)
	{
		ret[j] = s[i];
		++j;
		--i;
	}
	ret[j] = '\0';
	return (ret);
}
