/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jarao-de <jarao-de@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/21 10:55:46 by jarao-de          #+#    #+#             */
/*   Updated: 2024/08/31 16:52:00 by jarao-de         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

char	*ft_strcapitalize(char *str);

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
	char	str[56];

	ft_strcpy(str, "oi, tudo bem? 42palavras quarenta-e-duas; cinquenta+e+um");
	write(1, "str: ", 5);
	write(1, &str, 56);
	write(1, "\n", 1);
	write(1, "Retorno: ", 9);
	write(1, ft_strcapitalize(str), 56);
	write(1, "\n", 1);
	write(1, "str: ", 5);
	write(1, &str, 56);
}
