/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gtheodor <gtheodor@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/05 16:30:02 by gtheodor          #+#    #+#             */
/*   Updated: 2024/08/06 11:28:48 by gtheodor         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_numeric(char *str)
{
	int	counter;

	counter = 0;
	while (*(str + counter) != '\0')
	{
		if (!((*(str + counter) > 47) && (*(str + counter) < 58)))
		{
			return (0);
		}
		counter++;
	}
	return (1);
}
