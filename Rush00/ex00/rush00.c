/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hlashen <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/26 10:08:06 by hlashen           #+#    #+#             */
/*   Updated: 2021/06/26 13:17:51 by ytouab           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

int		checkcorner(int x, int y, int cx, int cy)
{
	int res;

	res = 0;
	if (cx == 1 && cy == 1)
		res = 1;
	else if (cx == x && cy == 1)
		res = 1;
	else if (cx == 1 && cy == y)
		res = 1;
	else if (cx == x && cy == y)
		res = 1;
	return (res);
}

void	rush(int x, int y)
{
	int cx;
	int cy;

	cx = 1;
	cy = 1;
	while (cy <= y)
	{
		while (cx <= x)
		{
			if (checkcorner(x, y, cx, cy))
				ft_putchar('o');
			else if (cx == 1 || cx == x)
				ft_putchar('|');
			else if (cy == 1 || cy == y)
				ft_putchar('-');
			else
				ft_putchar(' ');
			cx++;
		}
		ft_putchar('\n');
		cx = 1;
		cy++;
	}
}
