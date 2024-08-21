/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jarao-de <jarao-de@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/21 10:38:56 by jarao-de          #+#    #+#             */
/*   Updated: 2024/08/21 17:52:36 by jarao-de         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_str_is_uppercase.h"

int	main(void)
{
	char	str[7];
	int		is_uppercase;

	str[0] = 'P';
	str[1] = 'I';
	str[2] = 'S';
	str[3] = 'C';
	str[4] = 'I';
	str[5] = 'N';
	str[6] = 'A';
	is_uppercase = ft_str_is_uppercase(&str);
	if (is_uppercase == 1)
		write(1, "Y", 1);
	else
		write(1, "N", 1);
	str[3] = 'c';
	is_uppercase = ft_str_is_uppercase(&str);
	if (is_uppercase == 1)
		write(1, "Y", 1);
	else
		write(1, "N", 1);
}
