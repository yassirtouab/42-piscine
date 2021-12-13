/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ytouab <ytouab@student.42abudhabi.ae>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/27 17:40:41 by ytouab            #+#    #+#             */
/*   Updated: 2021/06/29 11:35:11 by ytouab           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int				lenght(char *c)
{
	char *d;

	d = c;
	while (*d)
		d++;
	return (d - c);
}

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int i;
	unsigned int x;

	i = 0;
	x = lenght(src);
	if (size == 0)
		return (x);
	while (src[i] && i < size - 1)
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = 0;
	return (x);
}
