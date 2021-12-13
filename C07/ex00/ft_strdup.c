/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ytouab <ytouab@student.42abudhabi.ae>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/04 21:52:22 by ytouab            #+#    #+#             */
/*   Updated: 2021/07/04 23:53:31 by ytouab           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int		ft_strlen(char *str)
{
	int i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

char	*ft_strdup(char *src)
{
	int		i;
	int		x;
	char	*m;

	i = ft_strlen(src) + 1;
	x = 0;
	m = (char*)malloc(i * sizeof(char));
	if (m == NULL)
		return (NULL);
	while (x < i)
	{
		m[x] = src[x];
		x++;
	}
	m[x] = 0;
	return (m);
}
