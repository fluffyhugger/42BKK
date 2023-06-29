/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: swuthith <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/26 12:32:53 by swuthith          #+#    #+#             */
/*   Updated: 2023/06/26 14:13:10 by swuthith         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	num;

	if (min >= max)
	{
		*range = NULL;
		return (0);
	}
	*range = (int *)malloc((max - min) * sizeof(int));
	if (*range == NULL)
		return (-1);
	num = 0;
	while (num < (max - min))
	{
		(*range)[num] = min + num;
		num++;
	}
	return (num);
}
/*
#include <stdio.h>
int	main()
{
	int	*range = NULL;
	int	min = 5;
	int	max = 9;
	printf("%d",ft_ultimate_range(&range,min,max));
}
*/
