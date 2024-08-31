/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jarao-de <jarao-de@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/29 12:42:04 by jarao-de          #+#    #+#             */
/*   Updated: 2024/08/31 09:57:59 by jarao-de         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
#include "ft_strlcat.h"

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
	char	str2[14];

	ft_strcpy(str, "Piscina");
	ft_strcpy(str2, " 42 Sao Paulo");
	printf("str = %s\tstr2 = %s\n", str, str2);
	printf("str = %s\treturn = %i\n", str, ft_strlcat(str, str2, 6));
	ft_strcpy(str, "Piscina");
	ft_strcpy(str2, " 42 Sao Paulo");
	printf("str = %s\treturn = %i\n", str, ft_strlcat(str, str2, 11));
	ft_strcpy(str, "Piscina");
	ft_strcpy(str2, " 42 Sao Paulo");
	printf("str = %s\treturn = %i\n", str, ft_strlcat(str, str2, 21));
	return (0);
}
