/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: swuthith <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/14 10:27:12 by swuthith          #+#    #+#             */
/*   Updated: 2023/06/14 10:50:18 by swuthith         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>
int	ft_str_is_uppercase(char *str)
{
	while (*str != '\0')
	{
		if (*str > 'z' - 32 || *str < 'a' - 32)
		{
			return (0);
		}
		str++;
	}
	return (1);
}
/*
int	main()
{
	printf("%d",ft_str_is_uppercase("GEokheo"));
	printf("%d",ft_str_is_uppercase("HELLO"));
}
*/
