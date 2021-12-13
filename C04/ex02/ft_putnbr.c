/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ytouab <ytouab@student.42abudhabi.ae>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/29 22:32:38 by ytouab            #+#    #+#             */
/*   Updated: 2021/07/02 02:53:08 by ytouab           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int nb)
{
	int x;

	x = nb;
	if (x < 0)
	{
		ft_putchar('-');
		x = -x;
	}
	if (x == -2147483648)
	{
		ft_putchar('2');
		x = 147483648;
	}
	nb = x;
	if (x > 9)
	{
		ft_putnbr(x / 10);
		ft_putchar(x % 10 + 48);
	}
	else
		ft_putchar(x % 10 + 48);
}
