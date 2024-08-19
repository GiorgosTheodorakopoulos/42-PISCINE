/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gtheodor <gtheodor@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/13 00:30:49 by gtheodor          #+#    #+#             */
/*   Updated: 2024/08/13 01:05:09 by gtheodor         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int argc, char *argv[])
{
	int		i;
	char	*arg;

	i = 1;
	while (i < argc)
	{
		arg = argv[i];
		while (*arg != '\0')
		{
			write(1, arg, 1);
			arg++;
		}
		write(1, "\n", 1);
		i++;
	}
	return (0);
}
