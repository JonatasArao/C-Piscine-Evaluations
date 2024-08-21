/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jarao-de <jarao-de@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/21 10:35:19 by jarao-de          #+#    #+#             */
/*   Updated: 2024/08/21 17:30:41 by jarao-de         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_str_is_lowercase.h"

int	main(void)
{
	char	str[7];
	int		is_lowercase;

	str[0] = 'p';
	str[1] = 'i';
	str[2] = 's';
	str[3] = 'c';
	str[4] = 'i';
	str[5] = 'n';
	str[6] = 'a';
	is_lowercase = ft_str_is_lowercase(&str);
	if (is_lowercase == 1)
		write(1, "Y", 1);
	else
		write(1, "N", 1);
	str[3] = 'C';
	is_lowercase = ft_str_is_lowercase(&str);
	if (is_lowercase == 1)
		write(1, "Y", 1);
	else
		write(1, "N", 1);
}
