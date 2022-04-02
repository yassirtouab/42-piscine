/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush04.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ytouab <ytouab@student.42abudhabi.ae>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/26 10:29:58 by ytouab            #+#    #+#             */
/*   Updated: 2022/04/02 05:29:22 by ytouab           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	rush(int x, int y)
{
	int fx;
	int fy;

	fy = 1;
	while (fy <= y && x > 0 && y > 0)
	{
		fx = 1;
		while (fx <= x)
		{
			if (fx == 1 && fy == 1)
				ft_putchar('A');
			else if ((fx == x && fy == 1) || (fx == 1 && fy == y))
				ft_putchar('C');
			else if (fx == x && fy == y)
				ft_putchar('A');
			else if (fx == 1 || fy == 1 || fx == x || fy == y)
				ft_putchar('B');
			else
				ft_putchar(' ');
			fx++;
		}
		ft_putchar('\n');
		fy++;
	}
}
