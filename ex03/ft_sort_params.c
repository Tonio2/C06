/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alabalet <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/19 17:50:40 by alabalet          #+#    #+#             */
/*   Updated: 2020/10/19 20:01:02 by alabalet         ###   ########.fr       */
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

int		ft_strcmp(char *s1, char *s2)
{
	int cpt;

	cpt = 0;
	while (s1[cpt])
	{
		if (s1[cpt] - s2[cpt])
			return s1[cpt] - s2[cpt];
		cpt++;
	}
	return (s1[cpt] - s2[cpt]);
}

void	ft_swap(char **args, int index1, int index2)
{
	char *tmp;

	tmp = args[index1];
	args[index1] = args[index2];
	args[index2] = tmp;
}

int		main(int argc, char **argv)
{
	int cpt;

	cpt = 1;
	while (cpt < argc - 1)
	{
		if (ft_strcmp(argv[cpt], argv[cpt + 1]) > 0)
		{
			ft_swap(argv, cpt, cpt + 1);
			cpt = 0;
		}
		cpt++;
	}
	cpt = 1;
	while (cpt < argc)
	{
		ft_putstr(argv[cpt]);
		write(1, "\n", 1);
		cpt++;
	}
}
