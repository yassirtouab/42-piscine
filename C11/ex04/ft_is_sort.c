/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_sort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ytouab <ytouab@student.42abudhabi.ae>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/12 06:14:56 by ytouab            #+#    #+#             */
/*   Updated: 2021/07/12 06:19:57 by ytouab           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_is_sort(int *tab, int length, int (*f)(int, int))
{
	int i;
	int x;
	int j;

	i = 0;
	j = length;
	while (j-- > 1)
	{
		x = f(tab[j], tab[j - 1]);
		if (!x)
			continue;
		if (!i)
			i = x;
		else if ((i < 0 && x > 0) || (i > 0 && x < 0))
			return (0);
	}
	return (1);
}
