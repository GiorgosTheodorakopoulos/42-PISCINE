/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eberkau <eberkau@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/02 22:19:59 by eberkau           #+#    #+#             */
/*   Updated: 2024/08/03 18:14:16 by eberkau          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_print_top_or_bottom(int columns);
void	ft_print_middle_lines(int columns, int rows);
void	rush(int columns, int rows);

/* enter the parameters as follows: 1st columns, 2nd rows */
int	main(void)
{
	rush(5, 6);
	return (0);
}
