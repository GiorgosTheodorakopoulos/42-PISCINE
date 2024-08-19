/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush-02.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dtrendaf <dtrendaf@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/18 13:25:43 by joklein           #+#    #+#             */
/*   Updated: 2024/08/18 23:17:09 by dtrendaf         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <fcntl.h>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int		check_if_printable(char *src, char **user_input);
int		check_input(int argc, char **argv);
void	argv_1(char **argv, char *buffer, int i);
void	argv_2(char **argv, char *buffer, int i);
void	argv_3(char **argv, char *buffer, int i);
int		check_array_pattern(char *arr, int size, int i);
char	*ft_strstr(char *str, char *to_find);
int		ft_atoi(char *str, char *atoi_res);
void	ft_strcpy(char *dest, char *src);

void	rush_02(char **argv, char *buffer)
{
	int	argv_len;
	int	i;

	argv_len = 0;
	while (argv[1][argv_len] != '\0')
		argv_len++;
	i = 0;
	if (argv_len == 1)
		argv_1(argv, buffer, i);
	else
	{
		if (argv_len == 2)
			argv_2(argv, buffer, i);
		else
			argv_3(argv, buffer, i);
	}
}

int	open_read2(char dict[], int open_desc, char *buffer, int buffer_size)
{
	int	bytes_read;

	open_desc = open(dict, O_RDONLY);
	if (open_desc == -1)
	{
		free(buffer);
		return (1);
	}
	bytes_read = read(open_desc, buffer, buffer_size - 1);
	if (bytes_read == -1)
	{
		free(buffer);
		close(open_desc);
		return (1);
	}
	buffer[bytes_read] = '\0';
	return (0);
}

int	opea_read(char **argv, char dict[], int i)
{
	int		buffer_size;
	char	*buffer;
	int		open_desc;
	int		check;

	open_desc = 0;
	buffer_size = 1024;
	buffer = malloc(buffer_size);
	if (buffer == NULL)
		return (1);
	if (open_read2(dict, open_desc, buffer, buffer_size) == 1)
		return (1);
	check = check_if_printable(buffer, argv) + check_array_pattern(buffer,
			buffer_size, i);
	if (check >= 1)
		return (2);
	rush_02(argv, buffer);
	free(buffer);
	close(open_desc);
	return (0);
}

int	argc3(char *dict_poi, char **argv, char dict[99])
{
	int	i;

	i = 0;
	ft_strcpy(dict_poi, argv[1]);
	ft_strcpy(argv[1], argv[2]);
	if (!(opea_read(argv, dict, i)))
	{
		write(1, "Error\n", 6);
		return (1);
	}
	return (0);
}

int	main(int argc, char **argv)
{
	char	dict[99];
	char	*dict_poi;
	int		i;

	i = 0;
	dict_poi = dict;
	if (check_input(argc, argv))
	{
		write(1, "Error\n", 6);
		return (1);
	}
	if (argc == 2)
	{
		ft_strcpy(dict_poi, "numbers.dict");
		if (opea_read(argv, dict, i) == 1)
		{
			write(1, "Error\n", 6);
			return (1);
		}
	}
	if (argc == 3)
		return (argc3(dict_poi, argv, dict));
	write(1, "\n", 1);
	return (0);
}
