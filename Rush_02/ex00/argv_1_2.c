/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   argv_1_2.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joklein <joklein@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/18 17:43:42 by joklein           #+#    #+#             */
/*   Updated: 2024/08/18 18:05:30 by joklein          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	find_write(char *buffer, char digit[100]);
void	write_deca_single(char **argv, char *buffer, int i);

void	argv_1(char **argv, char *buffer, int i)
{
	char	digit[100];

	digit[1] = '\0';
	digit[2] = '\0';
	digit[0] = argv[1][i];
	find_write(buffer, digit);
}

void	argv_2(char **argv, char *buffer, int i)
{
	char	digit[3];

	digit[1] = '\0';
	digit[2] = '\0';
	digit[0] = argv[1][i];
	if (digit[0] == '1')
	{
		digit[1] = argv[1][i + 1];
		find_write(buffer, digit);
	}
	else
		write_deca_single(argv, buffer, i);
}
