/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: swuthith <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/13 13:49:59 by swuthith          #+#    #+#             */
/*   Updated: 2023/06/13 17:39:42 by swuthith         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int	num;

	num = 0;
	while (src[num] != '\0' && num < n)
	{
		dest[num] = src[num];
		num++;
	}
	while (num < n)
	{
		dest[num] = '\0';
		num++;
	}
	return (dest);
}
/*
int	main()
{
	char	dest[6] = "World1";
	char	*src;
	int	num;

	src = "Hello";
	num = 5;
	ft_strncpy(dest,src,num);
	printf("%s",dest);
	return 0;
}
*/
