/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: swuthith <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/15 15:05:52 by swuthith          #+#    #+#             */
/*   Updated: 2023/06/15 17:53:58 by swuthith         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

char	*ft_strcapitalize(char *str)
{
	int	i;
	int	check;

	i = 0;
	check = 1;
	while (str[i] != '\0')
	{
		if ((str[i] >= '0' && str[i] <= '9')
			|| (str[i] >= 'a' && str[i] <= 'z')
			|| (str[i] >= 'A' && str[i] <= 'Z'))
		{
			if (check && (str[i] >= 'a' && str[i] <= 'z'))
				str[i] -= 32;
			else if (!check && (str[i] >= 'A' && str[i] <= 'Z'))
				str[i] += 32;
			check = 0;
		}
		else
		{
			check = 1;
		}
		i++;
	}
	return (str);
}

/*
int   main(void)
{
  char str[] = "salut, comment tu vas ? 42mots quarante-deux; cinquante+et+un";

  printf("%s",ft_strcapitalize(str));
  return (0);
}
*/
