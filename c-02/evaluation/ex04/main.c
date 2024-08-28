/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jarao-de <jarao-de@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/21 10:35:19 by jarao-de          #+#    #+#             */
/*   Updated: 2024/08/28 09:28:52 by jarao-de         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "ft_str_is_lowercase.h"

int	main(void)
{
	char	str[7];
	char	str2[1];

	str[0] = 'p';
	str[1] = 'i';
	str[2] = 's';
	str[3] = 'c';
	str[4] = 'n';
	str[5] = 'a';
	str[6] = '\0';
	if (ft_str_is_lowercase(str) == 1)
		write(1, "Y", 1);
	else
		write(1, "N", 1);
	str[3] = 'C';
	if (ft_str_is_lowercase(str) == 1)
		write(1, "Y", 1);
	else
		write(1, "N", 1);
	str2[0] = '\0';
	if (ft_str_is_lowercase(str2) == 1)
		write(1, "Y", 1);
	else
		write(1, "N", 1);
	return (0);
}
