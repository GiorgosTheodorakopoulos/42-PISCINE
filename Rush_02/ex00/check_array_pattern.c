/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_array_pattern.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joklein <joklein@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/18 20:34:06 by dtrendaf          #+#    #+#             */
/*   Updated: 2024/08/18 21:08:02 by joklein          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	check_array_pattern(char *arr, int size, int i)
{
	i = -1;
	while (++i < size && arr[i] != '\0')
	{
		if (arr[i] < '0' || arr[i] > '9')
			return (1);
		while (i < size && (arr[i] >= '0' && arr[i] <= '9'))
			i++;
		while (i < size && arr[i] == ' ')
			i++;
		if (i >= size || arr[i] != ':')
			return (1);
		i++;
		while (i < size && arr[i] == ' ')
			i++;
		while (i < size && arr[i] != '\n')
		{
			if (!(arr[i] >= ' ' && arr[i] <= '~'))
				return (1);
			i++;
		}
		if (i >= size || arr[i] != '\n')
			return (1);
	}
	return (0);
}
