/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ytouab <ytouab@student.42abudhabi.ae>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/05 18:08:34 by ytouab            #+#    #+#             */
/*   Updated: 2021/07/05 19:42:00 by ytouab           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		ft_ultimate_range(int **range, int min, int max)
{
	int *arr;
	int i;
	int s;

	i = 0;
	s = max - min;
	if (s <= 0)
	{
		*range = 0;
		return (0);
	}
	arr = (int*)malloc(s * sizeof(int));
	if (!arr)
		return (-1);
	while (i < s)
	{
		arr[i] = min + i;
		i++;
	}
	*range = arr;
	return (s);
}
