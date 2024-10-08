/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oxysan <oxysan@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/13 00:02:20 by oxy               #+#    #+#             */
/*   Updated: 2024/08/14 23:01:20 by oxysan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int	ft_strlen(char *str)
{
	int	val;
	int	temp;

	val = -1;
	while (str && str[++val])
	{
		if (str[val] == '+' || str[val] == '-')
			return (0);
		temp = val;
		while (str[++temp])
		{
			if (str[temp] == str[val])
				return (0);
		}
	}
	return (val);
}

int	ft_count_nb(int nb, int len)
{
	int	value;

	value = 0;
	while (nb >= len || nb <= -len)
	{
		nb /= len;
		value++;
	}
	return (value);
}

void	ft_putnbr_base(int nb, char *base)
{
	int	nb_count;
	int	n_tempo;
	int	nb_tempo;
	int	blen;
	int	signe;

	signe = 1;
	blen = ft_strlen(base);
	if (blen <= 1)
		return ;
	if (nb < 0)
	{
		write(1, "-", 1);
		signe = -1;
	}
	nb_count = ft_count_nb(nb, blen) + 1;
	while (nb_count-- > 0)
	{
		n_tempo = nb_count;
		nb_tempo = nb;
		while (n_tempo--)
			nb_tempo /= blen;
		write(1, &base[(nb_tempo % blen) * signe], 1);
	}
}

/*int	main(int argc, const char *argv[])
{
	int	i;

	ft_putnbr_base(-12021, "01");
	return (0);
}*/
