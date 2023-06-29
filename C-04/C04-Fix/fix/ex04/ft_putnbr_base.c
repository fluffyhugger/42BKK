/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: swuthith <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/17 16:14:51 by swuthith          #+#    #+#             */
/*   Updated: 2023/06/17 16:15:01 by swuthith         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>


void ft_putchar(char c) {
    write(1, &c, 1);
}

int check_base(char *base) {
    int i, j;

    // Check if the base is empty or has only one character
    if (!base || base[0] == '\0' || base[1] == '\0')
        return 0;

    // Check for invalid characters or duplicate characters
    i = 0;
    while (base[i]) {
        if (base[i] == '+' || base[i] == '-' || base[i] <= ' ' || base[i] > '~')
            return 0;
        j = i + 1;
        while (base[j]) {
            if (base[i] == base[j])
                return 0;
            j++;
        }
        i++;
    }
    return 1;
}

void ft_putnbr_base(int nbr, char *base) {
    int base_len = 0;

    if (!check_base(base)) {
        write(1, "Invalid base!\n", 14);
        return;
    }

    while (base[base_len])
        base_len++;

    if (nbr < 0) {
        ft_putchar('-');
        nbr = -nbr;
    }

    if (nbr >= base_len) {
        ft_putnbr_base(nbr / base_len, base);
        ft_putnbr_base(nbr % base_len, base);
    } else {
        ft_putchar(base[nbr]);
    }
}
