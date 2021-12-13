/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ytouab <ytouab@student.42abudhabi.ae>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/23 10:51:45 by ytouab            #+#    #+#             */
/*   Updated: 2021/06/23 21:07:28 by ytouab           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	print(char f, char s, char t)
{
	ft_putchar(f);
	ft_putchar(s);
	ft_putchar(t);
	if (f != '7' || s != '8' || t != '9')
	{
		ft_putchar(',');
		ft_putchar(' ');
	}
}

void	ft_print_comb(void)
{
	char f;
	char s;
	char t;

	f = '0';
	while (f <= '7')
	{
		s = '1';
		while (s <= '8')
		{
			t = '2';
			while (t <= '9')
			{
				if (f < s && s < t)
					print(f, s, t);
				t++;
			}
			s++;
		}
		f++;
	}
}
