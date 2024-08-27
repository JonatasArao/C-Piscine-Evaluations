/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jarao-de <jarao-de@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/21 10:30:52 by jarao-de          #+#    #+#             */
/*   Updated: 2024/08/27 16:02:46 by jarao-de         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "ft_strncpy.h"

int	main(void)
{
	unsigned int	size;
	char			str[7];
	char			str2[9];

	size = 3;
	str[0] = 'P';
	str[1] = 'I';
	str[2] = 'S';
	str[3] = 'C';
	str[4] = 'I';
	str[5] = 'N';
	str[6] = 'A';
	str2[0] = 'P';
	str2[1] = 'I';
	str2[2] = 'S';
	str2[3] = 'C';
	str2[4] = 'I';
	str2[5] = 'N';
	str2[6] = 'A';
	str2[7] = '4';
	str2[8] = '2';
	printf("%s\n", str);
	ft_strncpy(str2, str, 9);
	printf("%s\n", str2);
	return (0);
}
