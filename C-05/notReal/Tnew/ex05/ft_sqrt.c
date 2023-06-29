/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: swuthith <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/18 13:00:09 by swuthith          #+#    #+#             */
/*   Updated: 2023/06/18 14:46:19 by swuthith         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
int	ft_sqrt(int nb)
{
	int	i;

	i = 0;
	if (nb == 1)
	{
		return (1);
	}
	while (i < nb)
	{
		if (i * i == nb)
		{
			return (i);
		}
		else
		{
			i++;
		}
	}
	return (0);
}
/*
int	main()
{
	printf("%d",ft_sqrt(49));
	printf("%d",ft_sqrt(2));
}
*/
