/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ytouab <ytouab@student.42abudhabi.ae>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/27 14:25:50 by ytouab            #+#    #+#             */
/*   Updated: 2021/06/28 21:33:28 by ytouab           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_return(char c)
{
	if (c < '0')
		return (0);
	else if (c > '9' && c < 'A')
		return (0);
	else if ((c > 'Z' && c < 'a') || (c > 'z'))
		return (0);
	return (1);
}

char	*ft_strcapitalize(char *str)
{
	char *ca;

	ca = str;
	while (*ca)
	{
		if (ca == str)
		{
			if ((*ca <= 'z') && (*ca >= 'a'))
				*ca -= 32;
		}
		else if (ft_return(*(ca - 1)) == 0)
		{
			if ((*ca <= 'z') && (*ca >= 'a'))
				*ca -= 32;
		}
		else if ((*ca >= 'A') && (*ca <= 'Z'))
		{
			*ca += 32;
		}
		ca++;
	}
	return (str);
}
