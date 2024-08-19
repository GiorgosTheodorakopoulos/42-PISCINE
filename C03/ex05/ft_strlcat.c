/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gtheodor <gtheodor@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/08 12:34:30 by gtheodor          #+#    #+#             */
/*   Updated: 2024/08/19 10:04:45 by gtheodor         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
// #include <libc.h>

// #define SIZE 10

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	dest_len;
	unsigned int	src_len;
	unsigned int	i;

	dest_len = 0;
	src_len = 0;  
	while (dest[dest_len] != '\0' && dest_len < size)
		dest_len++;
	while (src[src_len] != '\0')
		src_len++;
	if (size <= dest_len)
		return (size + src_len);
	i = 0;
	while (src[i] != '\0' && (dest_len + i) < (size -1))
	{
		dest[dest_len + i] = src[i];
		i++;
	}
	dest[dest_len + i] = '\0';
	return (dest_len + src_len);
}

//int main(void)
//{
//    char    str1[50] = "abcbb"; /* INPUT HERE */
//    char    str2[] = "xyzl"; /* INPUT HERE */
//    ft_strlcat(str1, str2, SIZE);
//    printf("out: %s\n", str1);
//    printf("own: %u\n", ft_strlcat(str1, str2, SIZE));
//    printf("lib: %lu\n", strlcat(str1, str2, SIZE));
//    return (0);
//}