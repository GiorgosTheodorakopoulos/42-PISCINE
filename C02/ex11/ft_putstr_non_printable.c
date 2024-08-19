/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gtheodor <gtheodor@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/14 14:51:16 by gtheodor          #+#    #+#             */
/*   Updated: 2024/08/18 16:09:30 by gtheodor         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

static char	g_hex_digits[] = "0123456789abcdef";

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr_non_printable(char *str)
{
	while (*str)
	{
		if (*str >= 32 && *str <= 126)
		{
			ft_putchar(*str);
		}
		else
		{
			ft_putchar('\\');
			ft_putchar(g_hex_digits[(*str >> 4) & 0x0F]);
			ft_putchar(g_hex_digits[*str & 0x0F]);
		}
		str++;
	}
}

// int main() {
//     char test_str[] = "Coucou\ntu vas bien ?";
//     ft_putstr_non_printable(test_str);
//     return (0);
// }