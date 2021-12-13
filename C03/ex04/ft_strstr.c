/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ytouab <ytouab@student.42abudhabi.ae>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/29 19:41:08 by ytouab            #+#    #+#             */
/*   Updated: 2021/06/29 20:32:11 by ytouab           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(char *str, char *to_find)
{
	unsigned int i;
	unsigned int x;

	i = 0;
	if (!to_find[0])
		return (str);
	while (str[i])
	{
		x = 0;
		while (to_find[x] == str[i + x] && str[i + x])
			if (to_find[++x] == 0)
				return (str + i);
		i++;
	}
	return (0);
}
