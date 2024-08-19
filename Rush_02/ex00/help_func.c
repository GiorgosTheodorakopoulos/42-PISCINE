/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   help_func.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gtheodor <gtheodor@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/18 22:02:08 by joklein           #+#    #+#             */
/*   Updated: 2024/08/19 11:21:01 by gtheodor         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(char *str, char *to_find)
{
	int	i;
	int	h;
	int	u;

	i = 0;
	while (str[i] != '\0')
	{
		h = i;
		u = 0;
		while (str[h] == to_find[u])
		{
			if (to_find[u + 1] == '\0')
				return (&str[i]);
			h++;
			u++;
		}
		i++;
	}
	return (0);
}

int	ft_atoi(char *str, char *atoi_res)
{
	int	i;

	i = 0;
	while (*str >= '0' && *str <= '9')
		str++;
	while (*str == ' ' || *str == '\t' || *str == '\n' || *str == '\v'
		|| *str == '\f' || *str == '\r')
		str++;
	while (*str == ':')
		str++;
	while (*str == ' ' || *str == '\t' || *str == '\n' || *str == '\v'
		|| *str == '\f' || *str == '\r')
		str++;
	if (*str >= 'a' && *str <= 'z')
	{
		while (*str != '\n')
		{
			atoi_res[i] = *str;
			str++;
			i++;
		}
	}
	atoi_res[i] = '\0';
	return (i);
}

void	ft_strcpy(char *dest, char *src)
{
	int	i;

	i = 0;
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
}
