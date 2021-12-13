/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ytouab <ytouab@student.42abudhabi.ae>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/23 12:27:56 by ytouab            #+#    #+#             */
/*   Updated: 2021/06/23 13:29:47 by ytouab           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	put_cms(void)
{
	ft_putchar(',');
	ft_putchar(' ');
}

void	ft_print_comb2(void)
{
	int f;
	int s;

	f = 0;
	while (f <= 98)
	{
		s = 1;
		while (s <= 99)
		{
			if (s > f)
			{
				ft_putchar(f / 10 + 48);
				ft_putchar(f % 10 + 48);
				ft_putchar(' ');
				ft_putchar(s / 10 + 48);
				ft_putchar(s % 10 + 48);
				if (f != 98 || s != 99)
					put_cms();
			}
			s++;
		}
		f++;
	}
}
