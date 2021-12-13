/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ytouab <ytouab@student.42abudhabi.ae>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/29 15:49:56 by ytouab            #+#    #+#             */
/*   Updated: 2021/06/29 17:21:02 by ytouab           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcat(char *dest, char *src)
{
	int i;
	int x;

	i = 0;
	x = 0;
	while (dest[i])
		i++;
	while (src[x])
	{
		dest[i] = src[x];
		x++;
		i++;
	}
	dest[i] = 0;
	return (dest);
}
