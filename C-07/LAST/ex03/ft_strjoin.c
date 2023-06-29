/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: swuthith <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/26 13:55:41 by swuthith          #+#    #+#             */
/*   Updated: 2023/06/26 14:09:59 by swuthith         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}

char	*ft_strcat(char *dest, char *src)
{
	int	num;
	int	num2;

	num = 0;
	num2 = 0;
	while (dest[num] != '\0')
	{
		num++;
	}
	while (src[num2] != '\0')
	{
		dest[num] = src[num2];
		num++;
		num2++;
	}
	dest[num] = '\0';
	return (dest);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	int		i;
	int		j;
	int		total_len;
	char	*result;

	total_len = 0;
	i = size;
	while (i >= 1)
		total_len += ft_strlen(strs[--i]);
	total_len += ft_strlen(sep) * (size - 1);
	result = (char *)malloc(sizeof(char) * (total_len + 1));
	result[0] = '\0';
	j = 0;
	while (i < total_len)
	{
		ft_strcat(result, strs[j]);
		i += ft_strlen(strs[j++]);
		if (i < total_len)
		{
			ft_strcat(result, sep);
			i += ft_strlen(sep);
		}
	}
	result[total_len] = '\0';
	return (result);
}
/*
#include <stdio.h>
int main()
{
    char *strs[] = {"Hello", "world", "!", NULL};
    char *sep = "-";
    int size = 3;

    char *result = ft_strjoin(size, strs, sep);
    printf("Results: %s\n", result);

    free(result); 
    return 0;
}
*/
