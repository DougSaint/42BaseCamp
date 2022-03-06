/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dosantos <dosantos@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/12 16:26:07 by dosantos          #+#    #+#             */
/*   Updated: 2022/02/12 18:50:18 by dosantos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int ft_strlen(char *str)
{
	int count;

	count = 0;
	while(str[count] != '\0')
	{
		count++;
	}
	return (count);
}

/* int	main(void)
{
	char *string;
	int result;

	string = "teste";
	result = ft_strlen(string);
	printf("%d" ,result);
}
 */
