/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gtheodor <gtheodor@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/05 17:06:03 by gtheodor          #+#    #+#             */
/*   Updated: 2024/08/06 11:28:46 by gtheodor         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_lowercase(char *str)
{
	int	counter;

	counter = 0;
	while (*(str + counter) != '\0')
	{
		if (!((*(str + counter) > 96) && (*(str + counter) < 123)))
			return (0);
		counter++;
	}
	return (1);
}
