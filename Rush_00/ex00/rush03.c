/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush03.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eberkau <eberkau@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/02 22:30:44 by eberkau           #+#    #+#             */
/*   Updated: 2024/08/03 18:15:52 by eberkau          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);

/* function to print the upper and lower lines of the output */
void	ft_print_top_or_bottom(int columns)
{
	int	count_columns;

	ft_putchar('A');
	count_columns = 1;
	while (++count_columns < columns)
	{
		ft_putchar('B');
	}
	if (columns > 1)
	{
		ft_putchar('C');
	}
	ft_putchar('\n');
}

/* function to print the vertical lines of the output */
void	ft_print_middle_lines(int columns, int rows)
{
	int	count_columns;
	int	count_rows;

	count_columns = 1;
	count_rows = 1;
	ft_putchar('B');
	while (++count_rows < rows)
	{
		while (++count_columns < columns)
		{
			ft_putchar(' ');
		}
	}
	if (columns > 1)
	{
		ft_putchar('B');
	}
	ft_putchar('\n');
}

/* combining horizontal and vertial lines */
void	rush(int columns, int rows)
{
	if (columns <= 0 || rows <= 0)
	{
		write(1, "!!!  custom ERROR, insufficient parameters  !!!\n", 60);
	}
	else
	{
		ft_print_top_or_bottom(columns);
		while (rows > 2)
		{
			ft_print_middle_lines(columns, rows);
			rows--;
		}
		if (rows > 1)
		{
			ft_print_top_or_bottom(columns);
		}
	}
}
