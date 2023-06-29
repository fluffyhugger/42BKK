/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: swuthith <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/24 15:52:24 by swuthith          #+#    #+#             */
/*   Updated: 2023/06/26 14:39:39 by swuthith         ###   ########.fr       */
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
	num = (int *)malloc((nlast) + sizeof(int));
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
	int	*arr;

	arr = ft_range(2,6);
	for (int i = 0 ; i < (6-2) ; i++)
	{
		printf("%d \n",arr[i]);
	}
	free(arr);
	return (0);
}
*/
