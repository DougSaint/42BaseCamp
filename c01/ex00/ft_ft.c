/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ft.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dosantos <dosantos@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/11 18:23:29 by dosantos          #+#    #+#             */
/*   Updated: 2022/02/14 18:36:02 by dosantos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include <unistd.h>

void    ft_ft(int *nbr)
{
    *nbr = 42;
}

/* int main(void)
{
    int a;
    int *nbr;

    nbr = &a;
    ft_ft(nbr);

    if (a == 42)
    {
        write(1, "OK\n", 3);
    }
    else
    {
        write(1, "FAIL\n", 5);
    }
}
 */
