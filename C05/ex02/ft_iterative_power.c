/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ytouab <ytouab@student.42abudhabi.ae>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/02 05:19:14 by ytouab            #+#    #+#             */
/*   Updated: 2021/07/02 05:26:38 by ytouab           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_iterative_power(int nb, int power)
{
	int pwr;

	pwr = 1;
	if (power == 0)
		return (1);
	if (power < 0)
		return (0);
	while (power-- > 0)
		pwr = nb * pwr;
	return (pwr);
}
