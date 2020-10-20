/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_program_name.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alabalet <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/19 16:57:28 by alabalet          #+#    #+#             */
/*   Updated: 2020/10/20 11:25:37 by alabalet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int argc, char **argv)
{
	int cpt;

	cpt = 0;
	argc++;
	while (argv[0][cpt])
	{
		write(1, &argv[0][cpt], 1);
		cpt++;
	}
	write(1, "\n", 1);
	return (0);
}
