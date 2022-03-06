/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dosantos <dosantos@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/12 17:27:09 by dosantos          #+#    #+#             */
/*   Updated: 2022/02/14 13:36:42 by dosantos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void    ft_rev_int_tab(int *tab, int size)
{
    int temp;
    int end;
    int start;

    start = 0;
    end = size - 1;
    while (start < end)
    {
	  	temp = tab[start];
        tab[start] = tab[end];
        tab[end] = temp;
        start++;
        end--;
    }
}

/*  #include <stdio.h>

 int main(void)
 {
     int    arr[10] = {1,2,3,4,5,6,7,8,9,10};

     for(int i = 0; i < 10; i++)
     {
         printf("%d", arr[i]);
     }
     ft_rev_int_tab(arr, 10);
     printf("\n");
     for(int i = 0; i < 10; i++)
     {
         printf("%d", arr[i]);
     }
     printf("\n");
     return (0);
 } */
