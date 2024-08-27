/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jarao-de <jarao-de@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/21 10:55:08 by jarao-de          #+#    #+#             */
/*   Updated: 2024/08/27 16:03:07 by jarao-de         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "ft_strupcase.h"

int	main(void)
{
	char	str[7];

	str[0] = 'p';
	str[1] = 'i';
	str[2] = 's';
	str[3] = 'c';
	str[4] = 'i';
	str[5] = 'n';
	str[6] = 'a';
	write(1, &str, 7);
	write(1, " ", 1);
	write(1, ft_strupcase(str), 7);
	write(1, "\n", 1);
	write(1, &str, 7);
	return (0);
}
