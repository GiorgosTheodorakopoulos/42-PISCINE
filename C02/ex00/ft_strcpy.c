/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gtheodor <gtheodor@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/04 17:23:49 by gtheodor          #+#    #+#             */
/*   Updated: 2024/08/06 11:28:55 by gtheodor         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcpy(char *dest, char *src)
{
	int	counter;

	counter = 0;
	while (*(src + counter) != '\0')
	{
		*(dest + counter) = *(src + counter);
		counter++;
	}
	*(dest + counter) = '\0';
	return (dest);
}
