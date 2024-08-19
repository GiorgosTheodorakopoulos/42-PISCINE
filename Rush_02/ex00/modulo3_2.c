/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   modulo3_2.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joklein <joklein@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/18 18:13:43 by joklein           #+#    #+#             */
/*   Updated: 2024/08/18 18:16:46 by joklein          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	write_deca_single(char **argv, char *buffer, int i);
void	find_write(char *buffer, char digit[100]);

int	modulo3_2_2(char **argv, char *buffer, int i, int *argv_len_poi)
{
	char	digit[3];

	digit[0] = argv[1][i];
	digit[2] = '\0';
	if (digit[0] == '1')
	{
		digit[1] = argv[1][i + 1];
		find_write(buffer, digit);
		*argv_len_poi = *argv_len_poi - 2;
		i = i + 2;
	}
	else
	{
		write_deca_single(argv, buffer, i);
		*argv_len_poi = *argv_len_poi - 2;
		i = i + 2;
	}
	return (i);
}

int	modulo3_2(char **argv, char *buffer, int i, int *argv_len_poi)
{
	char	digit[3];

	digit[2] = '\0';
	digit[0] = argv[1][i];
	if (digit[0] != '0')
		i = modulo3_2_2(argv, buffer, i, argv_len_poi);
	else
	{
		i++;
		digit[0] = argv[1][i];
		digit[1] = '\0';
		if (digit[0] != '0')
		{
			find_write(buffer, digit);
		}
		*argv_len_poi = *argv_len_poi - 2;
		i++;
	}
	return (i);
}
