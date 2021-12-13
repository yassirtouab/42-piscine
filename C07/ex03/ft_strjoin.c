/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ytouab <ytouab@student.42abudhabi.ae>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/05 19:59:00 by ytouab            #+#    #+#             */
/*   Updated: 2021/07/13 04:24:18 by ytouab           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int		ft_strlen(char *str)
{
	int i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

char	*ft_strcat(char *dest, char *src)
{
	int i;
	int x;

	i = 0;
	x = 0;
	while (dest[i])
		i++;
	while (src[x])
		dest[i++] = src[x++];
	dest[i] = 0;
	return (dest);
}

int		ft_finallen(int size, char **strs, char *sep)
{
	int seplen;
	int i;
	int flen;

	i = 0;
	seplen = ft_strlen(sep);
	if (size)
	{
		flen = seplen * (size - 1) + 1;
		while (i < size)
		{
			flen = flen + ft_strlen(strs[i]);
			i++;
		}
	}
	else
		flen = 1;
	return (flen);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	int		i;
	int		flen;
	char	*final;

	i = 0;
	flen = ft_finallen(size, strs, sep);
	final = (char*)malloc(flen * sizeof(char));
	if (!(final))
		return (0);
	final[0] = 0;
	while (i < size && flen > 0)
	{
		ft_strcat(final, strs[i]);
		i++;
		if (i != size)
			ft_strcat(final, sep);
	}
	return (final);
}
