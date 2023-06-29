/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: swuthith <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/21 16:22:18 by swuthith          #+#    #+#             */
/*   Updated: 2023/06/21 16:28:42 by swuthith         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcat(char *dest, char *src)
{
	int	num1;
	int	num2;

	num1 = 0;
	num2 = 0;
	while (dest[num1] != '\0')
	{
		num1++;
	}
	while (src[num2] != '\0')
	{
		dest[num1] = src[num2];
		num1++;
		num2++;
	}
	dest[num1] = '\0';
	return (dest);
}
