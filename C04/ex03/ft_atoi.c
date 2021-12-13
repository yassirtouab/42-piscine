/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ytouab <ytouab@student.42abudhabi.ae>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/29 22:53:31 by ytouab            #+#    #+#             */
/*   Updated: 2021/07/02 03:49:31 by ytouab           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_atoi(char *str)
{
	int i;
	int symb;
	int nb;

	i = 0;
	symb = 0;
	nb = 0;
	while (str[i] && (str[i] == '\t' || str[i] == ' ' || str[i] == '\r'
				|| str[i] == '\v' || str[i] == '\f'))
		i++;
	while (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			symb++;
		i++;
	}
	while ((str[i] >= '0' && str[i] <= '9'))
	{
		nb = nb * 10 + (str[i] - 48);
		i++;
	}
	if (symb % 2 == 0)
		return (nb);
	else
		return (-nb);
}
