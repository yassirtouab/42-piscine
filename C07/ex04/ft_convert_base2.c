/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base2.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ytouab <ytouab@student.42abudhabi.ae>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/11 15:03:34 by ytouab            #+#    #+#             */
/*   Updated: 2021/07/13 04:25:49 by ytouab           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>

int		ft_strlen(char *str)
{
	int i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

int		ft_checker(char *base)
{
	int i;
	int j;

	i = 0;
	if (ft_strlen(base) < 2)
		return (1);
	while (base[i])
	{
		j = 0;
		while (base[j])
			if (base[i] == base[j++] && i != j - 1)
				return (2);
		if (base[i] == '+' || base[i] == '-' || base[i] == ' ' ||
			base[i] == '\f' || base[i] == '\n' || base[i] == '\t' ||
			base[i] == '\v')
			return (3);
		i++;
	}
	return (0);
}

int		ft_inbase(char c, char *base)
{
	int i;

	i = 0;
	while (base[i])
		if (base[i++] == c)
			return (0);
	return (1);
}
