/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: swuthith <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/21 16:50:10 by swuthith          #+#    #+#             */
/*   Updated: 2023/06/21 18:39:31 by swuthith         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char *str)
{
	int	n;

	n = 0;
	while (str[n] != '\0')
	{
		n++;
	}
	return (n);
}

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	lendest;
	unsigned int	srclen;

	i = 0;
	srclen = ft_strlen(src);
	lendest = ft_strlen(dest);
	if (size == 0 || lendest >= size)
		return (srclen + size);
	size -= (lendest);
	while (*src && size)
	{
		dest[lendest + i] = src[i];
		size--;
		i++;
	}
	dest[lendest + i] = '\0';
	return (lendest + srclen);
}

/*
#include<stdio.h>
int main()
{
	char dest[20] = "Hello";
	char src[] = "World!";
	unsigned int result = ft_strlcat(dest, src, 8);
	
	printf("Concatenated string: %s\n", dest);
	printf("Length of the concatenated string: %u\n", result);
}
*/
