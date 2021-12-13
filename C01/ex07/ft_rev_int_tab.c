/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ytouab <ytouab@student.42abudhabi.ae>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/25 12:09:58 by ytouab            #+#    #+#             */
/*   Updated: 2021/06/25 12:32:41 by ytouab           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_rev_int_tab(int *tab, int size)
{
	int i;
	int tmp;

	i = -1;
	while (i++ < --size)
	{
		tmp = tab[i];
		tab[i] = tab[size];
		tab[size] = tmp;
	}
}
