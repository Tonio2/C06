/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alabalet <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/19 17:29:15 by alabalet          #+#    #+#             */
/*   Updated: 2020/10/19 17:44:18 by alabalet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putstr(char *str)
{
	int cpt;

	cpt = 0;
	while (str[cpt])
	{
		write(1, &str[cpt], 1);
		cpt++;
	}
}

int		main(int argc, char **argv)
{
	int cpt;

	cpt = 1;
	while (cpt < argc)
	{
		ft_putstr(argv[cpt]);
		write(1, "\n", 1);
		cpt++;
	}
}
