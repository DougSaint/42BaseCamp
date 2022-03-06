/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dosantos <dosantos@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/11 18:23:14 by dosantos          #+#    #+#             */
/*   Updated: 2022/02/11 18:23:15 by dosantos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void ft_swap(int *a, int *b)
{
    int swap;

    swap = *b;
    *b = *a;
    *a = swap;
}

// void ft_swap();
// int main(void)
// {
//     int y;
//     int z;
//     int *a;
//     int *b;

//     y = 42;
//     z = 24;
//     a = &y;
//     b = &z;


//     ft_swap(a, b);
//     printf("%d, %d", y, z);
// }
