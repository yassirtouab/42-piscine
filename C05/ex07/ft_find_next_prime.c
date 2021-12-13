/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ytouab <ytouab@student.42abudhabi.ae>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/02 20:48:44 by ytouab            #+#    #+#             */
/*   Updated: 2021/07/03 09:51:32 by ytouab           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_is_prime(int nb)
{
	int x;

	x = 3;
	if (nb == 0 || nb == 1 || nb < 0)
		return (0);
	if (nb == 2)
		return (1);
	while (x < nb - 1)
	{
		if (nb % x == 0)
			return (0);
		x++;
	}
	return (1);
}

int		ft_find_next_prime(int nb)
{
	while ((nb < 2147483647) && (ft_is_prime(nb) == 0))
		nb++;
	return (nb);
}
