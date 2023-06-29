/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: swuthith <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/21 16:30:03 by swuthith          #+#    #+#             */
/*   Updated: 2023/06/21 16:37:52 by swuthith         ###   ########.fr       */
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
		dest[num] = src[num2];
		num++;
		num2++;
	}
	dest[num] = '\0';
	return (dest);
}
