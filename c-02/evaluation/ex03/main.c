/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jarao-de <jarao-de@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/21 10:35:25 by jarao-de          #+#    #+#             */
/*   Updated: 2024/08/21 17:29:11 by jarao-de         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_str_is_numeric.h"

int	main(void)
{
	char	str[4];
	int		is_numeric;

	str[0] = '1';
	str[1] = '9';
	str[2] = '9';
	str[3] = '2';
	is_numeric = ft_str_is_numeric(&str);
	if (is_numeric == 1)
		write(1, "Y", 1);
	else
		write(1, "N", 1);
	str[0] = 'I';
	is_numeric = ft_str_is_numeric(&str);
	if (is_numeric == 1)
		write(1, "Y", 1);
	else
		write(1, "N", 1);
}
