/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: swuthith <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/26 11:58:58 by swuthith          #+#    #+#             */
/*   Updated: 2023/06/26 18:07:02 by swuthith         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	i;
	int	*num;
	int	nlast;

	if (min >= max)
		return (NULL);
	i = 0;
	nlast = max - min;
	num = (int *)malloc((nlast) * sizeof(int));
	while (i < nlast)
	{
		num[i] = min + i;
		i++;
	}
	return (num);
}
/*
#include <stdio.h>
int	main()
{
	int	min;
	int	max;

	min = 5;
	max = 10;
	int *result = ft_range(min, max);

	for (int i = 0; i < (max - min); i++)
        {
            printf("%d \n", result[i]);
        }
	free(result);
	return (0);
}
*/
