/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jarao-de <jarao-de@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/21 10:55:46 by jarao-de          #+#    #+#             */
/*   Updated: 2024/08/28 09:22:34 by jarao-de         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "ft_putstr_non_printable.h"

int	main(void)
{
	char	str[17];

	str[0] = 'P';
	str[1] = 'I';
	str[2] = 'S';
	str[3] = 'C';
	str[4] = 'I';
	str[5] = 'N';
	str[6] = 'A';
	str[7] = '\t';
	str[8] = '4';
	str[9] = '2';
	str[10] = '\n';
	str[11] = 'S';
	str[12] = 'P';
	str[13] = '!';
	str[14] = 127;
	str[15] = '\v';
	str[16] = '\0';
	write(1, &str, 16);
	write(1, "\n", 1);
	ft_putstr_non_printable(str);
	return (0);
}
