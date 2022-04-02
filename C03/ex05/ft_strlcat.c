/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ytouab <ytouab@student.42abudhabi.ae>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/29 20:36:57 by ytouab            #+#    #+#             */
/*   Updated: 2022/04/02 05:34:18 by ytouab           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlen(char *str)
{
	unsigned int i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int i;
	unsigned int sl;
	unsigned int dl;
	unsigned int r;

	i = 0;
	sl = ft_strlen(src);
	dl = ft_strlen(dest);
	if (size == 0)
		return (sl);
	if (size < dl)
		r = sl + size;
	else
		r = sl + dl;
	while (src[i++] && ((i + dl) < (size)))
		dest[i + dl - 1] = src[i - 1];
	dest[i + dl - 1] = 0;
	return (r);
}
