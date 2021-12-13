/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush03.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aalchake <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/25 16:17:03 by aalchake          #+#    #+#             */
/*   Updated: 2021/06/25 20:13:26 by aalchake         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	rush(int x, int y)
{
	int cx;
	int cy;

	cx = 1;
	cy = 1;
	while (cy <= y && y > 0 && x > 0)
	{
		while (cx <= x)
		{
			if ((cx == 1 && cy == 1) || (cx == 1 && cy == y))
				ft_putchar('A');
			else if ((cx == x && cy == 1) || (cx == x && cy == y))
				ft_putchar('C');
			else if (cx == 1 || cx == x || cy == 1 || cy == y)
				ft_putchar('B');
			else
				ft_putchar(' ');
			cx++;
		}
		cx = 1;
		ft_putchar('\n');
		cy++;
	}
}
