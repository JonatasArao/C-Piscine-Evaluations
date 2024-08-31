/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jarao-de <jarao-de@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/28 15:07:48 by jarao-de          #+#    #+#             */
/*   Updated: 2024/08/29 11:47:36 by jarao-de         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "ft_strcat.h"

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
	printf("str = %s\treturn = %s\n", str, ft_strcat(str, str2));
	return (0);
}
