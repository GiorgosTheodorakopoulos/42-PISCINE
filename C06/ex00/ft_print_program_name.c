/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_program_name.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gtheodor <gtheodor@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/13 00:17:01 by gtheodor          #+#    #+#             */
/*   Updated: 2024/08/15 17:01:43 by gtheodor         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int argc, char *argv[])
{
	int			len;
	const char	*error_message = "Error\n";

	if (argc > 0)
	{
		len = 0;
		while (argv[0][len] != '\0')
		{
			len++;
		}
		write(1, argv[0], len);
		write(1, "\n", 1);
	}
	else
	{
		write(2, error_message, 6);
	}
	return (0);
}
