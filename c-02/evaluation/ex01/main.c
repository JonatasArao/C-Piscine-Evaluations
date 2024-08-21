/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jarao-de <jarao-de@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/21 10:30:52 by jarao-de          #+#    #+#             */
/*   Updated: 2024/08/21 18:39:14 by jarao-de         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_strncpy.h"

int	main(void)
{
	unsigned int	size;
	char			str[9];
	char			str2[9];

	size = 3;
	str[0] = 'P';
	str[1] = 'I';
	str[2] = 'S';
	str[3] = 'C';
	str[4] = 'I';
	str[5] = 'N';
	str[6] = 'A';
	str[7] = '4';
	str[8] = '2';
	write(1, &str, 9);
	write(1, "\n", 1);
	ft_strncpy(&str, &str2, 7);
	write(1, &str2, 9);
}
