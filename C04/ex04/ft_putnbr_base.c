/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ytouab <ytouab@student.42abudhabi.ae>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/30 17:53:34 by ytouab            #+#    #+#             */
/*   Updated: 2021/07/02 04:08:20 by ytouab           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int		ft_strlen(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

int		ft_check(char *base)
{
	int i;
	int y;

	i = 0;
	if (ft_strlen(base) < 2)
		return (1);
	while (base[i] != '\0')
	{
		y = 0;
		while (base[y] != '\0')
			if (base[i] == base[y++] && i != y - 1)
				return (2);
		if (base[i] == '+' || base[i] == '-')
			return (3);
		i++;
	}
	return (0);
}

void	ft_putnbr_base(int nb, char *base)
{
	int			bsys;
	long int	nbr;

	nbr = nb;
	bsys = ft_strlen(base);
	if (ft_check(base) != 0)
		return ;
	if (nbr < 0)
	{
		ft_putchar('-');
		if (nbr <= -1 * bsys)
			ft_putnbr_base(((nbr / bsys) * -1), base);
		ft_putchar(base[((nbr * -1) % bsys)]);
	}
	else
	{
		if (nbr >= bsys)
			ft_putnbr_base((nbr / bsys), base);
		ft_putchar(base[(nbr % bsys)]);
	}
}
