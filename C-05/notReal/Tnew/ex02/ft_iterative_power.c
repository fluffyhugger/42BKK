/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: swuthith <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/18 10:12:02 by swuthith          #+#    #+#             */
/*   Updated: 2023/06/18 12:20:05 by swuthith         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
int	ft_iterative_power(int nb, int power)
{
	int	num;

	num = nb;
	if (power < 0)
	{
		return (0);
	}
	if (nb == 0 || power == 0)
	{
		return (1);
	}
	while (power > 1)
	{
		nb *= num;
		power --;
	}
	return (nb);
}
/*
int	main()
{
	printf("%d",ft_iterative_power(3,0));
	return 0;
}
*/
