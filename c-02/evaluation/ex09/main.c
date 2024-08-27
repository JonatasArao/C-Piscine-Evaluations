/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jarao-de <jarao-de@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/21 10:55:46 by jarao-de          #+#    #+#             */
/*   Updated: 2024/08/27 16:03:15 by jarao-de         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "ft_strcapitalize.h"

int	main(void)
{
	char	str[17];

	str[0] = 'p';
	str[1] = 'I';
	str[2] = 'S';
	str[3] = 'C';
	str[4] = '!';
	str[5] = 'n';
	str[6] = 'a';
	str[7] = '-';
	str[8] = 's';
	str[9] = 'p';
	str[10] = ';';
	str[11] = 'b';
	str[12] = 'r';
	str[13] = ' ';
	str[14] = 's';
	str[15] = 'i';
	str[16] = 'l';
	write(1, &str, 18);
	write(1, " ", 1);
	write(1, ft_strcapitalize(str), 18);
	write(1, "\n", 1);
	write(1, &str, 18);
	return (0);
}
