/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gtheodor <gtheodor@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/11 14:26:23 by gtheodor          #+#    #+#             */
/*   Updated: 2024/08/11 14:44:10 by gtheodor         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int	number;

	if (nb < 0)
	{
		return (0);
	}
	number = 1;
	while (nb > 1)
	{
		number *= nb;
		nb--;
	}
	return (number);
}
