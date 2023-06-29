/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strlcpy.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: swuthith <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/15 18:15:54 by swuthith          #+#    #+#             */
/*   Updated: 2023/06/15 18:32:24 by swuthith         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	j;

	i = 0;
	j = 0;
	while (src[j] != '\0')
		j++;
	if (size < 1)
		return (j);
	while (src[i] != '\0' && i < size - 1)
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (j);
}

/*
int	main()
{
	char dest[20];
    	char src[] = "Hello, World!";
    	unsigned int size = 10;

	unsigned int result = ft_strlcpy(dest, src, size);
	
  	printf("Copy: %s\n", dest);
    	printf("Length: %u\n", result);
	return 0;
}
*/
