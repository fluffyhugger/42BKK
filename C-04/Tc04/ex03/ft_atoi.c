/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: swuthith <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/16 19:42:07 by swuthith          #+#    #+#             */
/*   Updated: 2023/06/16 19:54:10 by swuthith         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
 int ft_atoi(char *str) 
{
        int res = 0;
        int sign = 1;

        // Skip whitespace characters
        while (*str == ' ' || (*str >= 9 && *str <= 13))
            str++;

        // Check for sign
        while (*str == '-' || *str == '+') {
            if (*str == '-')
                sign *= -1;
            str++;
        }

        // Process digits
        while (*str >= '0' && *str <= '9') {
            res = (res * 10) + (*str - '0');
            str++;
        }

        return res * sign;
}
