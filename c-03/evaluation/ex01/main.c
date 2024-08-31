/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jarao-de <jarao-de@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/28 14:19:13 by jarao-de          #+#    #+#             */
/*   Updated: 2024/08/29 17:56:40 by jarao-de         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
#include "ft_strncmp.h"

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
	char	str[8];
	char	str2[8];

	ft_strcpy(str, "PISCINA");
	ft_strcpy(str2, "PISCin4");
	printf("str = %s\tstr2 = %s\nn = 4\treturn = %i\n",
		str, str2, ft_strncmp(str, str2, 4));
	printf("str = %s\tstr2 = %s\nn = 7\treturn = %i\n",
		str, str2, ft_strncmp(str, str2, 7));
	ft_strcpy(str2, "PISC1Na");
	printf("str = %s\tstr2 = %s\nn = 4\treturn = %i\n",
		str, str2, ft_strncmp(str, str2, 4));
	printf("str = %s\tstr2 = %s\nn = 7\treturn = %i\n",
		str, str2, ft_strncmp(str, str2, 7));
	printf("str = %s\tstr2 = %s\nn = 0\treturn = %i",
		str, str2, ft_strncmp(str, str2, 0));
}
