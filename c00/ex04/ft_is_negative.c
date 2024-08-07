/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_negative.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: etaquet <etaquet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/07 15:20:17 by etaquet           #+#    #+#             */
/*   Updated: 2024/08/07 15:29:43 by etaquet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_is_negative(int n)
{
	char	result;

	if (n < 0)
	{
		result = 'N';
		write(1, &result, 1);
	}
	else
	{
		result = 'P';
		write(1, &result, 1);
	}
}

void	main(void)
{
	ft_is_negative(1);
	ft_is_negative(-25);
	ft_is_negative(10055123);
}
