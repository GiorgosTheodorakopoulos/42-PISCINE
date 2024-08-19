/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gtheodor <gtheodor@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/05 17:14:21 by gtheodor          #+#    #+#             */
/*   Updated: 2024/08/06 11:28:43 by gtheodor         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_uppercase(char *str)
{
	int	counter;

	counter = 0;
	while (*(str + counter) != '\0')
	{
		if (!((*(str + counter) > 64) && (*(str + counter) < 91)))
			return (0);
		counter++;
	}
	return (1);
}
