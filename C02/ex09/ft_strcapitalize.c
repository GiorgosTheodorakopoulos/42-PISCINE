/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gtheodor <gtheodor@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/05 17:58:31 by gtheodor          #+#    #+#             */
/*   Updated: 2024/08/12 15:15:19 by gtheodor         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strlowcase(char *str)
{
	int	counter;

	counter = 0;
	while (str[counter] != '\0')
	{
		if ((str[counter] > 64) && (str[counter] < 91))
		{
			str[counter] = str[counter] + 32;
		}
		counter++;
	}
	return (str);
}

char	*ft_strcapitalize(char *str)
{
	int	x;
	int	y;

	x = 0;
	y = 1;
	ft_strlowcase(str);
	while (str[x] != '\0')
	{
		if ((str[x] > 96) && (str[x] < 123))
		{
			if (y == 1)
				str[x] = str[x] - 32;
			y = 0;
		}
		else if ((str[x] > 47) && (str[x] < 58))
			y = 0;
		else
			y = 1;
		x++;
	}
	return (str);
}
