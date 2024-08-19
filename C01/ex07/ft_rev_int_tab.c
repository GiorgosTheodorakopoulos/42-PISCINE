/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gtheodor <gtheodor@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/03 22:43:04 by gtheodor          #+#    #+#             */
/*   Updated: 2024/08/04 13:58:09 by gtheodor         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_rev_int_tab(int *tab, int size)
{
	int	temp_var;
	int	ind;
	int	end;

	ind = 0;
	end = size - 1;
	while (ind < end)
	{
		temp_var = tab[ind];
		tab[ind] = tab[end];
		tab[end] = temp_var;
		ind++;
		end--;
	}
}
