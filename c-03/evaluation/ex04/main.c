/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jarao-de <jarao-de@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/28 16:13:41 by jarao-de          #+#    #+#             */
/*   Updated: 2024/08/31 20:01:26 by jarao-de         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
#include "ft_strstr.h"

char	*ft_strcpy(char *dest, char *src)
{
	int	index;

	index = 0;
	while (src[index] != '\0')
	{
		dest[index] = src[index];
		index = index + 1;
	}
	dest[index] = '\0';
	return (dest);
}

int	main(void)
{
	char	str[21];
	char	str2[3];
	char	*substr;

	ft_strcpy(str, "Piscina 42 Sao Paulo");
	ft_strcpy(str2, "42");
	printf("str = %s\tstr2 = %s\n", str, str2);
	substr = ft_strstr(str, str2);
	if (substr)
		printf("%s encontrado em %s\n", str2, substr);
	else
		printf("%s não encontrado\n", str2);
	ft_strcpy(str2, "SP");
	printf("str = %s\tstr2 = %s\n", str, str2);
	substr = ft_strstr(str, str2);
	if (substr)
		printf("%s encontrado em %s\n", str2, substr);
	else
		printf("%s não encontrado\n", str2);
	substr = ft_strstr(str, "");
	if (substr)
		printf("%s encontrado em %s\n", "Vazio", substr);
	else
		printf("%s não encontrado\n", str2);
	return (0);
}
