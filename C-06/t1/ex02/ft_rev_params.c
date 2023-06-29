/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: swuthith <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/19 15:02:39 by swuthith          #+#    #+#             */
/*   Updated: 2023/06/20 10:04:20 by swuthith         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	print_str(char *str)
{
	while (*str != '\0')
	{
		write(1, str++, 1);
	}
}

int	main(int argc, char **values)
{
	int	i;

	i = argc - 1;
	while (i >= 1)
	{
		print_str(values[i]);
		write(1, "\n", 1);
		i--;
	}
	return (0);
}
