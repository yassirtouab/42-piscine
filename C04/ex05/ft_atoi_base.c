/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ytouab <ytouab@student.42abudhabi.ae>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/12 17:15:52 by ytouab            #+#    #+#             */
/*   Updated: 2021/07/12 17:15:54 by ytouab           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		ft_strlen(char *str)
{
	int i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

int		ft_checker_space(char *str, char *base)
{
	int i;
	int x;

	i = 0;
	if (ft_strlen(base) < 2)
		return (-1);
	while (base[i] != '\0')
	{
		x = 0;
		while (base[x])
			if (base[i] == base[x++] && i != x - 1)
				return (-2);
		if (base[i] == '+' || base[i] == '-' || base[i] == ' ')
			return (-3);
		i++;
	}
	i = 0;
	while (str[i] && (str[i] == ' ' || str[i] == '\f' ||
		str[i] == '\n' || str[i] == '\t' || str[i] == '\v'))
		i++;
	return (i);
}

int		ft_check_in_base(char c, char *base)
{
	int i;

	i = 0;
	while (base[i] != '\0')
		if (base[i++] == c)
			return (0);
	return (1);
}

int		ft_atoi_base(char *str, char *base)
{
	int i;
	int x;
	int nbr;
	int symb;

	i = ft_checker_space(str, base);
	if (i < 0)
		return (0);
	nbr = 0;
	symb = 0;
	while (str[i] && (str[i] == '+' || str[i] == '-'))
		if (str[i++] == '-')
			symb++;
	while (str[i] && ft_check_in_base(str[i], base) == 0)
	{
		x = 0;
		while (base[x] != '\0')
			if (base[x++] == str[i])
				nbr = nbr * ft_strlen(base) + x - 1;
		i++;
	}
	if ((symb % 2) != 0)
		nbr = nbr * -1;
	return (nbr);
}
