/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ytouab <ytouab@student.42abudhabi.ae>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/11 13:44:49 by ytouab            #+#    #+#             */
/*   Updated: 2021/07/13 04:26:37 by ytouab           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		ft_fsep(char c, char *charset)
{
	int	i;

	i = -1;
	while (charset[++i])
		if (charset[i] == c)
			return (1);
	return (0);
}

int		ft_nbstr(char *str, char *charset)
{
	int nb;
	int i;

	nb = 0;
	i = 0;
	while (str[i])
	{
		while (str[i] && ft_fsep(str[i], charset))
			i++;
		if (str[i] && !ft_fsep(str[i], charset))
			nb++;
		while (str[i] && !ft_fsep(str[i], charset))
			i++;
	}
	return (nb);
}

char	**ft_split(char *str, char *charset)
{
	char	**strs;
	int		strslen;
	int		i;
	int		x;

	strslen = ft_nbstr(str, charset);
	if (!(strs = (char **)malloc((strslen + 1) * sizeof(char *))))
		return (0);
	i = 0;
	while (i < strslen)
	{
		while (*str && ft_fsep(*str, charset))
			str++;
		x = 0;
		while (str[x] && !ft_fsep(str[x], charset))
			x++;
		if (!(strs[i] = (char *)malloc(x + 1)))
			return (0);
		x = 0;
		while (*str && !ft_fsep(*str, charset))
			strs[i][x++] = *str++;
		strs[i++][x] = 0;
	}
	strs[i] = 0;
	return (strs);
}
