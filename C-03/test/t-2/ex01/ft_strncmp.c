/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: swuthith <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/21 16:15:48 by swuthith          #+#    #+#             */
/*   Updated: 2023/06/21 16:20:10 by swuthith         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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
		num ++;
	}
	if (num != n)
	{
		return (s1[num] - s2[num]);
	}
	return (0);
}
