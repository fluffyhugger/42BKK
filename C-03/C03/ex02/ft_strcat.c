/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: swuthith <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/15 11:03:14 by swuthith          #+#    #+#             */
/*   Updated: 2023/06/25 17:40:14 by swuthith         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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
