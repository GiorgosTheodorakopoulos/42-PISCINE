/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gtheodor <gtheodor@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/13 16:53:17 by gtheodor          #+#    #+#             */
/*   Updated: 2024/08/17 20:02:06 by gtheodor         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int nb)
{
	if (nb == -2147483648)
	{
		ft_putchar('-');
		ft_putchar('2');
		nb = 147483648;
	}
	if (nb < 0)
	{
		ft_putchar('-');
		nb = -nb;
	}
	if (nb >= 10)
	{
		ft_putnbr(nb / 10);
		ft_putnbr(nb % 10);
	}
	else
	{
		ft_putchar(nb + '0');
	}
}

// #include <unistd.h>
// int main(void)
// {
//     ft_putnbr(42);
//     ft_putchar('\n');
//     ft_putnbr(-42);
//     ft_putchar('\n');
//     ft_putnbr(0);
//     ft_putchar('\n');
//     ft_putnbr(2147483647);
//     ft_putchar('\n');
//     ft_putnbr(-2147483648);
//     ft_putchar('\n');
//     return (0);
// }