/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maechard <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/11 20:14:26 by maechard          #+#    #+#             */
/*   Updated: 2017/03/12 14:44:34 by maechard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

void	sastantua(int size);

int		main(int argc, char *argv[])
{
	if (argc > 0)
		sastantua(atoi(argv[1]));
	return (0);
}
