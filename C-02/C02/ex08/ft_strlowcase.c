/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: swuthith <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/14 14:06:59 by swuthith          #+#    #+#             */
/*   Updated: 2023/06/15 17:52:04 by swuthith         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
char	*ft_strlowcase(char *str)
{
	int	num;

	num = 0;
	while (str[num] != '\0')
	{
		if (str[num] >= 'A' && str[num] <= 'Z')
		{
			str[num] += 32;
		}
		num++;
	}
	return (str);
}
/*
int	main()
{
	char	hello[] = "HELLOWORLD";
	printf("%s",hello);

	ft_strlowcase(hello);

	printf("%s",hello);
}
*/
