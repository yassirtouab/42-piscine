/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush01.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ytouab <ytouab@student.42abudhabi.ae>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/25 13:51:02 by ytouab            #+#    #+#             */
/*   Updated: 2022/04/02 05:27:45 by ytouab           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	rush(int x, int y)
{
	int cx;
	int cy;

	cx = 1;
	cy = 1;
	while (cy <= y && x > 0 && y > 0)
	{
		while (cx <= x)
		{
			if (cx == 1 && cy == 1)
				ft_putchar('/');
			else if ((cx == 1 && cy == y) || (cx == x && cy == 1))
				ft_putchar('\\');
			else if (cx == x && cy == y)
				ft_putchar('/');
			else if (cx == 1 || cy == 1 || cx == x || cy == y)
				ft_putchar('*');
			else
				ft_putchar(' ');
			cx++;
		}
		ft_putchar('\n');
		cx = 1;
		cy++;
	}
}
