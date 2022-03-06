/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dosantos <dosantos@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/11 18:29:58 by dosantos          #+#    #+#             */
/*   Updated: 2022/02/12 18:50:28 by dosantos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

/* void	ft_putstr(char *str)
{
	int count;

	count = 0;
	while(str[count] != '\0')
	{
		write(1, &str[count], 1);
		count++;
	}
}
 */
void ft_putstr(char *str)
{
	while(*str != '\0')
	{
		write(1, &(*str), 1);
		str++;
	}
}

/* int	main(void)
{
	char *string;

	string = "abcdef";
	ft_putstr(string);
//	write(1,&(string[2]),1);
} */
