/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gtheodor <gtheodor@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/13 16:17:40 by gtheodor          #+#    #+#             */
/*   Updated: 2024/08/17 20:02:34 by gtheodor         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	print_number(int number)
{
	char	str[2];

	str[0] = '0' + number / 10;
	str[1] = '0' + number % 10;
	write(1, str, 2);
}

void	ft_print_comb2(void)
{
	int	num1;
	int	num2;

	num1 = 0;
	num2 = 1;
	while (num1 <= 98)
	{
		while (num2 <= 99)
		{
			print_number(num1);
			write(1, " ", 1);
			print_number(num2);
			if (num1 != 98 || num2 != 99)
			{
				write(1, ", ", 2);
			}
			num2++;
		}
		num1++;
		num2 = num1 + 1;
	}
}

// int main(void)
// {
// 	ft_print_comb2();
// 	write(1, "\n", 1);
// 	return (0);
// }