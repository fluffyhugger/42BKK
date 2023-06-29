/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_program_name.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: swuthith <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/19 13:29:13 by swuthith          #+#    #+#             */
/*   Updated: 2023/06/20 15:35:34 by swuthith         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	write_str(char *str)
{
	while (*str != '\0')
	{
		write(1, str++, 1);
	}
}

int	main(int argc, char **value)
{
	if (argc > 0)
	{
		write_str(value[0]);
		write(1, "\n", 1);
	}
	return (0);
}
