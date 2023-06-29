/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: swuthith <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/18 19:20:40 by swuthith          #+#    #+#             */
/*   Updated: 2023/06/18 19:56:41 by swuthith         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_sqrt(int nb)
{
	long	i;
	long	j;

	i = 0;
	j = nb;
	if (nb == 1)
	{
		return (1);
	}
	while (i * i <= j)
	{
		if (i * i == j)
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
