/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/27 01:09:07 by cpoulain          #+#    #+#             */
/*   Updated: 2024/08/30 00:12:40 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./includes/lib.h"

int	main(int argc, char **argv)
{
	t_map	map_data;
	int		i;

	if (argc < 2)
		ft_init_solving(NULL, &map_data);
	else
	{
		i = 1;
		while (argv[i])
		{
			ft_init_solving(argv[i++], &map_data);
		}
	}
	return (0);
}
