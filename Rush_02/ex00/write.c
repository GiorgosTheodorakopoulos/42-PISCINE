/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   write.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joklein <joklein@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/18 17:47:53 by joklein           #+#    #+#             */
/*   Updated: 2024/08/18 18:06:33 by joklein          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

char	*ft_strstr(char *str, char *to_find);
int		ft_atoi(char *str, char *atoi_res);

void	find_write(char *buffer, char digit[100])
{
	char	*str_found;
	int		word_len;
	char	word[100];

	str_found = ft_strstr(buffer, digit);
	word_len = ft_atoi(str_found, word);
	write(1, word, word_len);
}

void	write_deca_single(char **argv, char *buffer, int i)
{
	char	digit[3];

	digit[0] = argv[1][i];
	digit[1] = '0';
	digit[2] = '\0';
	find_write(buffer, digit);
	if (argv[1][i + 1] != '0')
	{
		write(1, " ", 1);
		digit[0] = argv[1][i + 1];
		digit[1] = '\0';
		find_write(buffer, digit);
	}
}

void	write_hundred(char *buffer)
{
	char	digit[4];

	write(1, " ", 1);
	digit[0] = '1';
	digit[1] = '0';
	digit[2] = '0';
	digit[3] = '\0';
	find_write(buffer, digit);
}

void	wirte_space_end(char **argv, int i)
{
	int	n;

	n = 0;
	while (argv[1][i])
	{
		if (argv[1][i] != '0')
		{
			if (n != 2)
				write(1, " ", 1);
			break ;
		}
		n++;
		i++;
	}
}

void	write_big_num(char **argv, char *buffer, int i, int *argv_len_poi)
{
	int		n;
	char	digit[100];

	n = 1;
	if (*argv_len_poi >= 3)
	{
		digit[0] = '1';
		while (n < *argv_len_poi + 1)
		{
			digit[n] = '0';
			n++;
		}
		digit[n] = '\0';
		write(1, " ", 1);
		find_write(buffer, digit);
		wirte_space_end(argv, i);
	}
}
