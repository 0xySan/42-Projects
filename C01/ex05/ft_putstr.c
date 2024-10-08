/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: root <root@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/07 21:45:58 by oxy               #+#    #+#             */
/*   Updated: 2024/08/23 20:57:08 by root             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putstr(char *str)
{
	while (str != 0 && *str != 0)
	{
		write(1, str++, 1);
	}
}

// int main()
// {
// 	char *str = "Hello, World!";
// 	ft_putstr(str);
// }