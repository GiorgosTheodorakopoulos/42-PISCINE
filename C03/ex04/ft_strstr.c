/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gtheodor <gtheodor@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/08 13:35:43 by gtheodor          #+#    #+#             */
/*   Updated: 2024/08/10 21:13:32 by gtheodor         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(char *str, char *to_find)
{
	char	*s1;
	char	*s2;

	if (*to_find == '\0')
		return (str);
	while (*str)
	{
		if (*str == *to_find)
		{
			s1 = str;
			s2 = to_find;
			while (*s1 == *s2 && *s2 != '\0')
			{
				s1++;
				s2++;
			}
			if (*s2 == '\0')
				return (str);
		}
		str++;
	}
	return (0);
}
