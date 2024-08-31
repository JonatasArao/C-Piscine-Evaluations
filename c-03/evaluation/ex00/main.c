/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jarao-de <jarao-de@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/28 10:20:03 by jarao-de          #+#    #+#             */
/*   Updated: 2024/08/29 14:34:37 by jarao-de         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "ft_strcmp.h"

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

	ft_strcpy(str, "piscina");
	ft_strcpy(str2, "PISCINA");
	printf("str = %s\tstr2 = %s\nreturn = %i\n",
		str, str2, ft_strcmp(str, str2));
	ft_strcpy(str, "PISCINA");
	ft_strcpy(str2, "piscina");
	printf("str = %s\tstr2 = %s\nreturn = %i\n",
		str, str2, ft_strcmp(str, str2));
	ft_strcpy(str2, "PISCINA");
	printf("str = %s\tstr2 = %s\nreturn = %i\n",
		str, str2, ft_strcmp(str, str2));
	ft_strcpy(str2, "PISC1N4");
	printf("str = %s\tstr2 = %s\nreturn = %i\n",
		str, str2, ft_strcmp(str, str2));
	return (0);
}
