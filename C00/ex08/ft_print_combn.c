/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_combn.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ytouab <ytouab@student.42abudhabi.ae>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/03 21:39:50 by ytouab            #+#    #+#             */
/*   Updated: 2021/07/03 22:29:48 by ytouab           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char a)
{
	write(1, &a, 1);
}

void	checker(int cbn[], int n)
{
	int i;

	i = 0;
	while (i < n)
	{
		ft_putchar(cbn[i] + '0');
		i++;
	}
}

int		numb(int cbn[], int n)
{
	int i;
	int x;

	i = 0;
	x = 10 - n;
	while (i < n)
	{
		if (cbn[i] == x)
			return (i - 1);
		if (i == (n - 1) && cbn[i] < x)
			return (i);
		i++;
		x++;
	}
	return (-1);
}

void	incr(int cbn[], int n, int x)
{
	int i;

	i = x + 1;
	cbn[x]++;
	while (i <= n)
	{
		cbn[i] = cbn[i - 1] + 1;
		i++;
	}
}

void	ft_print_combn(int n)
{
	int cbn[n];
	int i;
	int x;

	if (n >= 10 || n <= 0)
		return ;
	else
	{
		i = 0;
		while (i < n)
		{
			cbn[i] = i;
			i++;
		}
		while (numb(cbn, n) != -1)
		{
			x = numb(cbn, n);
			checker(cbn, n);
			incr(cbn, n, x);
			write(1, ", ", 2);
		}
		checker(cbn, n);
	}
}
