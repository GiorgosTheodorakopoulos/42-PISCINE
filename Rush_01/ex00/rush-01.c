/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush-01.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: djanardh <djanardh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/10 15:46:17 by djanardh          #+#    #+#             */
/*   Updated: 2024/08/11 23:03:38 by djanardh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>

// #include "ft_putchar.c"
void	ft_putchar(char c);

// Any other input must be considered an error
int	check_input(char *input)
{
	int	i;

	i = 0;
	while (input[i] != '\0')
	{
		if((i == 0) || (i % 2 == 0))
		{
			if (input[i] < '1' || input[i] > '4')
			{
				return (0);
			}
		}
		if ((i == 1) || (i % 2 == 1))
		{
			if (input[i] != ' ')
			{
				return (0);
			}
		}
		i++;
	}
	if (i != 31)
		return (0);
	return (1);
}

int	main(int argc, char *argv[])
{
	char	grid[6][6];
	int		i;
	int		r;
	int		c;

	i = 0;
	r = 0;
	c = 0;
	while (r < 6)
	{
		while (c < 6)
		{
			grid[r][c] = '0';
			c++;
		}
		r++;
	}
	if (argc != 2 || check_input(argv[1]) == 0)
	{
		write(1, "Error\n", 6);
		return (1);
	}
	c = 1;
	r = 0; // 36  lines - should i hard code it and make it 16 lines instead?
	while ((i < 7) && (r == 0) && (c < 5))
	{
		grid[r][c] = argv[1][i];
		i+=2;
		c++;
	}
	r = 5;
	c = 1;
	i = 8; 
	while ((i < 15) && (r == 5) && (c < 5))
	{
		grid[r][c] = argv[1][i];
		i+=2;
		c++;
	}
	r = 1;
	c = 0;
	i = 16; 
	while ((i < 23) && (r < 5) && (c == 0))
	{
		grid[r][c] = argv[1][i];
		i+=2;
		r++;
	}
	r = 1;
	c = 5;
	i = 24; 
	while ((i < 31) && (r < 6) && (c == 5))
	{
		grid[r][c] = argv[1][i];
		i+=2;
		r++;
	}
	// if 1 then put 4
	c = 1;
	while (c < 5)
	{
		if (grid[0][c] == '1')
		{
			grid[1][c] = '4';
		}
		c++;
	}
	c = 1;
	while (c < 5)
	{
		if (grid[5][c] == '1')
		{
			grid[4][c] = '4';
		}
		c++;
	}
	r = 1;
	while (r < 5)
	{
		if (grid[r][0] == '1')
		{
			grid[r][1] = '4';
		}
		r++;
	}
	r = 1;
	while (r < 5)
	{
		if (grid[r][5] == '1')
		{
			grid[r][4] = '4';
		}
		r++;
	}
	// if 4 then put 1234
	c = 1;
	while (c < 5)
	{
		if (grid[0][c] == '4')
		{
			grid[1][c] = '1';
			grid[2][c] = '2';
			grid[3][c] = '3';
			grid[4][c] = '4';
		}
		c++;
	}
	c = 1;
	while (c < 5)
	{
		if (grid[5][c] == '4')
		{
			grid[4][c] = '1';
			grid[3][c] = '2';
			grid[2][c] = '3';
			grid[1][c] = '4';
		}
		c++;
	}
	r = 1;
	while (r < 5)
	{
		if (grid[r][0] == '4')
		{
			grid[r][1] = '1';
			grid[r][2] = '2';
			grid[r][3] = '3';
			grid[r][4] = '4';
		}
		r++;
	}
	r = 1;
	while (r < 5)
	{
		if (grid[r][5] == '4')
		{
			grid[r][4] = '1';
			grid[r][3] = '2';
			grid[r][2] = '3';
			grid[r][1] = '4';
		}
		r++;
	}
	// printing the grid
	r = 1;
	while (r < 5)
	{
		c = 1;
		while (c < 5)
		{
			ft_putchar(grid[r][c]);
			ft_putchar(' ');
			c++;
		}
		ft_putchar('\n');
		r++;
	}
	return (0);
}
