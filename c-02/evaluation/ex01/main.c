/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jarao-de <jarao-de@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/21 10:30:52 by jarao-de          #+#    #+#             */
/*   Updated: 2024/08/28 09:26:22 by jarao-de         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "ft_strncpy.h"

int	main(void)
{
	char			str[8];
	char			str2[10];

	str[0] = 'P';
	str[1] = 'I';
	str[2] = 'S';
	str[3] = 'C';
	str[4] = 'I';
	str[5] = 'N';
	str[6] = 'A';
	str[7] = '\0';
	str2[0] = 'P';
	str2[1] = 'I';
	str2[2] = 'S';
	str2[3] = 'C';
	str2[4] = 'I';
	str2[5] = 'N';
	str2[6] = 'A';
	str2[7] = '4';
	str2[8] = '2';
	str2[9] = '\0';
	printf("%s => %s\n", str, ft_strncpy(str2, str, 8));
	printf("%s\n", str2);
	return (0);
}
