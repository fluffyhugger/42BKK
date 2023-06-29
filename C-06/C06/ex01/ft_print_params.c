/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: swuthith <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/19 13:58:05 by swuthith          #+#    #+#             */
/*   Updated: 2023/06/19 14:52:50 by swuthith         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	write_str(char	*str)
{
	while (*str != '\0')
	{
		write(1, str++, 1);
	}
}

int	main(int argc, char **values)
{
	int	i;

	i = 1;
	while (i < argc)
	{
		write_str(values[i]);
		write(1, "\n", 1);
		i++;
	}
	return (0);
}
