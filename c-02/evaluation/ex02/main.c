/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jarao-de <jarao-de@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/21 10:35:32 by jarao-de          #+#    #+#             */
/*   Updated: 2024/08/21 17:29:17 by jarao-de         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_str_is_alpha.h"

int	main(void)
{
	char	str[7];
	int		is_alpha;

	str[0] = 'P';
	str[1] = 'I';
	str[2] = 'S';
	str[3] = 'C';
	str[4] = 'I';
	str[5] = 'N';
	str[6] = 'A';
	is_alpha = ft_str_is_alpha(&str);
	if (is_alpha == 1)
		write(1, "Y", 1);
	else
		write(1, "N", 1);
	str[1] = '1';
	is_alpha = ft_str_is_alpha(&str);
	if (is_alpha == 1)
		write(1, "Y", 1);
	else
		write(1, "N", 1);
}
