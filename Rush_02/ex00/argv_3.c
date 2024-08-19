/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   argv_3.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gtheodor <gtheodor@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/18 17:53:43 by joklein           #+#    #+#             */
/*   Updated: 2024/08/19 11:45:19 by gtheodor         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	write_big_num(char **argv, char *buffer, int i, int *argv_len_poi);
void	write_hundred(char *buffer);
void	find_write(char *buffer, char digit[100]);
void	wirte_space_end(char **argv, int i);
int		modulo3_2(char **argv, char *buffer, int i, int *argv_len_poi);

int	modulo3(char **argv, char *buffer, int i, int *argv_len_poi)
{
	char	digit[2];

	digit[1] = '\0';
	digit[0] = argv[1][i];
	if (digit[0] != 0)
	{
		find_write(buffer, digit);
		write_hundred(buffer);
		wirte_space_end(argv, i + 1);
	}
	*argv_len_poi = *argv_len_poi - 1;
	i++;
	return (i);
}

int	modulo3_1(char **argv, char *buffer, int i, int *argv_len_poi)
{
	char	digit[2];

	digit[0] = argv[1][i];
	digit[1] = '\0';
	find_write(buffer, digit);
	*argv_len_poi = *argv_len_poi - 1;
	i++;
	return (i);
}

int	full_case(char **argv, char *buffer, int i, int *argv_len_poi)
{
	if (*argv_len_poi % 3 == 0)
		i = modulo3(argv, buffer, i, argv_len_poi);
	if (*argv_len_poi % 3 == 2)
		i = modulo3_2(argv, buffer, i, argv_len_poi);
	else
		i = modulo3_1(argv, buffer, i, argv_len_poi);
	write_big_num(argv, buffer, i, argv_len_poi);
	return (i);
}

void	argv_3(char **argv, char *buffer, int i)
{
	int	argv_len;
	int	*argv_len_poi;

	argv_len_poi = &argv_len;
	argv_len = 0;
	while (argv[1][argv_len] != '\0')
		argv_len++;
	while (argv_len > 0)
	{
		if (argv[1][i] == '0' && argv[1][i + 1] == '0' && argv[1][i + 2] == '0')
		{
			i = i + 3;
			argv_len = argv_len - 3;
			continue ;
		}
		if (argv[1][i] == '0')
		{
			i = i + 1;
			argv_len = argv_len - 1;
			continue ;
		}
		i = full_case(argv, buffer, i, argv_len_poi);
	}
}
