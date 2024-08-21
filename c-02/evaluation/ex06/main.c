/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jarao-de <jarao-de@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/21 10:39:03 by jarao-de          #+#    #+#             */
/*   Updated: 2024/08/21 17:55:09 by jarao-de         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_str_is_printable.h"

int	main(void)
{
	char	str[7];
	int		is_printable;

	str[0] = 'P';
	str[1] = 'I';
	str[2] = 'S';
	str[3] = 'C';
	str[4] = 'I';
	str[5] = 'N';
	str[6] = 'A';
	is_printable = ft_str_is_printable(&str);
	if (is_printable == 1)
		write(1, "Y", 1);
	else
		write(1, "N", 1);
	str[3] = 7;
	is_printable = ft_str_is_printable(&str);
	if (is_printable == 1)
		write(1, "Y", 1);
	else
		write(1, "N", 1);
}
