/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gtheodor <gtheodor@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/05 15:50:22 by gtheodor          #+#    #+#             */
/*   Updated: 2024/08/06 11:28:51 by gtheodor         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_alpha(char *str)
{
	int	counter;

	counter = 0;
	while (*(str + counter) != '\0')
	{
		if (!((*(str + counter) > 96) && (*(str + counter) < 123)))
		{
			if (!((*(str + counter) > 64) && (*(str + counter) < 91)))
			{
				return (0);
			}
		}
		counter++;
	}
	return (1);
}
