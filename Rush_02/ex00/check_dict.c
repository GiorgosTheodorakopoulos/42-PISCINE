/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_dict.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dtrendaf <dtrendaf@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/18 16:50:25 by joklein           #+#    #+#             */
/*   Updated: 2024/08/18 23:16:17 by dtrendaf         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

int	check_max_len(char *src)
{
	int	i;
	int	size;
	int	max_len;
	int	current_len;

	size = ft_strlen(src);
	i = 0;
	while (i < size)
	{
		current_len = 0;
		while (i < size && (src[i] >= '0' && src[i] <= '9'))
		{
			current_len++;
			i++;
		}
		if (current_len > max_len)
		{
			max_len = current_len;
		}
		while (i < size && src[i] != '\n')
			i++;
		i++;
	}
	return (max_len);
}

int	check_if_printable(char *src, char **user_input)
{
	int	src_max_len;
	int	input_len;

	src_max_len = check_max_len(src) + 2;
	input_len = ft_strlen(&user_input[1][0]);
	if (src_max_len < input_len)
	{
		write(1, "Dict Error", 10);
		return (2);
	}
	return (0);
}

int	check_input_2(char **argv)
{
	int	i;

	i = 0;
	if (argv[2][i] == '0' && argv[2][i + 1] != '\0')
		return (1);
	while (argv[2][i] != '\0')
	{
		if (!(argv[2][i] >= '0' && argv[2][i] <= '9'))
			return (1);
		i++;
	}
	while (argv[2][i] != '\0')
	{
		if (!(argv[2][i] >= 32 && argv[2][i] <= 126))
			return (1);
		i++;
	}
	return (0);
}

int	check_input(int argc, char **argv)
{
	int	i;

	i = 0;
	if (argc <= 1 || argc > 3)
		return (1);
	if (argc == 2)
	{
		if (argv[1][i] == '0' && argv[1][i + 1] != '\0')
			return (1);
		while (argv[1][i] != '\0')
		{
			if (!(argv[1][i] >= '0' && argv[1][i] <= '9'))
				return (1);
			i++;
		}
	}
	if (argc == 3)
	{
		return (check_input_2(argv));
	}
	return (0);
}
