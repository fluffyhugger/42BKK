/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: swuthith <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/14 18:45:51 by swuthith          #+#    #+#             */
/*   Updated: 2023/06/16 11:16:54 by swuthith         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	num;

	num = 0;
	while (s1[num] != '\0' && s2[num] != '\0' && num < n)
	{
		if (s1[num] != s2[num])
		{
			return (s1[num] - s2[num]);
		}
		num++;
	}
	if (num != n)
	{
		return (s1[num] - s2[num]);
	}
	return (0);
}
/*
int main()
{
	char str1[] = "Hello";
	char str2[] = "Hello2";
	int res = ft_strncmp(str1, str2, 4);

	printf("Result: %d\n",res);
	return 0 ;
}
*/
