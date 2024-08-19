/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gtheodor <gtheodor@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/05 17:24:13 by gtheodor          #+#    #+#             */
/*   Updated: 2024/08/06 11:28:40 by gtheodor         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_printable(char *str)
{
	int	counter;

	counter = 0;
	while (*(str + counter) != '\0')
	{
		if (!((*(str + counter) > 31) && (*(str + counter) < 127)))
			return (0);
		counter++;
	}
	return (1);
}
