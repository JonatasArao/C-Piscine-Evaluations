/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jarao-de <jarao-de@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/21 10:35:32 by jarao-de          #+#    #+#             */
/*   Updated: 2024/08/27 16:02:51 by jarao-de         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "ft_str_is_alpha.h"

int	main(void)
{
	char	str[7];
	char	str2[1];

	str[0] = 'P';
	str[1] = 'i';
	str[2] = 'S';
	str[3] = 'c';
	str[4] = 'I';
	str[5] = 'n';
	str[6] = 'A';
	if (ft_str_is_alpha(str) == 1)
		write(1, "Y", 1);
	else
		write(1, "N", 1);
	str[1] = '1';
	if (ft_str_is_alpha(str) == 1)
		write(1, "Y", 1);
	else
		write(1, "N", 1);
	if (ft_str_is_alpha(str2) == 1)
		write(1, "Y", 1);
	else
		write(1, "N", 1);
	return (0);
}
