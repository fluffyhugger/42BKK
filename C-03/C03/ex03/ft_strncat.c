/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: swuthith <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/15 11:41:40 by swuthith          #+#    #+#             */
/*   Updated: 2023/06/15 20:00:49 by swuthith         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	num;
	unsigned int	num2;

	num = 0;
	num2 = 0;
	while (dest[num] != '\0')
	{
		num++;
	}	
	while (src[num2] != '\0' && num2 < nb)
	{
		dest[num] = src [num2];
		num++;
		num2++;
	}
	dest[num] = '\0';
	return (dest);
}
