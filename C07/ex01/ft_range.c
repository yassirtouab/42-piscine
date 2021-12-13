/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ytouab <ytouab@student.42abudhabi.ae>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/05 00:00:09 by ytouab            #+#    #+#             */
/*   Updated: 2021/07/05 19:43:29 by ytouab           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int		*ft_range(int min, int max)
{
	int *range;
	int	c;
	int	i;

	i = 0;
	c = max - min;
	if (max <= min)
		return (0);
	range = (int*)malloc(c * sizeof(int));
	if (!range)
		return (0);
	while (i < c)
	{
		range[i] = min + i;
		i++;
	}
	return (range);
}
