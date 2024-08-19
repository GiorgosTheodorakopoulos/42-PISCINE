/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gtheodor <gtheodor@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/10 18:18:49 by gtheodor          #+#    #+#             */
/*   Updated: 2024/08/11 21:36:58 by gtheodor         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_atoi(char *str)
{
	int	i;
	int	negative_counter;
	int	number;
	int	temp;

	i = 0;
	while ((str[i] >= 9 && str[i] <= 13) || str[i] == 32)
		i++;
	negative_counter = 0;
	while (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			negative_counter++;
		i++;
	}
	number = 0;
	while (str[i] >= '0' && str[i] <= '9')
	{
		temp = str[i] - '0';
		number = number * 10 + temp;
		i++;
	}
	if (negative_counter % 2 != 0)
		number *= -1;
	return (number);
}
