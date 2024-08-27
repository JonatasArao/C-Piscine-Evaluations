/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jarao-de <jarao-de@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/21 10:55:46 by jarao-de          #+#    #+#             */
/*   Updated: 2024/08/27 16:03:11 by jarao-de         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "ft_strlowcase.h"

int	main(void)
{
	char	str[7];

	str[0] = 'P';
	str[1] = 'I';
	str[2] = 'S';
	str[3] = 'C';
	str[4] = 'I';
	str[5] = 'N';
	str[6] = 'A';
	write(1, &str, 7);
	write(1, " ", 1);
	write(1, ft_strlowcase(str), 7);
	write(1, "\n", 1);
	write(1, &str, 7);
	return (0);
}
