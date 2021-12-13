/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ytouab <ytouab@student.42abudhabi.ae>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/29 17:23:18 by ytouab            #+#    #+#             */
/*   Updated: 2021/06/29 17:52:20 by ytouab           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int i;
	unsigned int x;

	i = 0;
	x = 0;
	while (dest[i])
		i++;
	while (src[x] && x < nb)
	{
		dest[i] = src[x];
		x++;
		i++;
	}
	dest[i] = 0;
	return (dest);
}
