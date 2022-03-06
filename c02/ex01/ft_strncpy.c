/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dosantos <dosantos@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/12 19:17:49 by dosantos          #+#    #+#             */
/*   Updated: 2022/02/15 14:41:14 by dosantos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char *ft_strncpy(char *dest, char *src, unsigned int n)
{
	int index;

	index = 0;
	while (index < n)
	{
		dest[index] = src[index];
		index++;
	}
	while(dest[index])
	{
		dest[index] = '\0';
		index++;
	}
	return (dest);
}

#include <stdio.h>
int	main(void)
{
	char	source[12] = "Astolphinho";
	char	dest[16] = "Astolphinhooooo";
	int count;
	char *ptr;

	count = 0;
	while(dest[count] != '\0')
	{
		printf("%c", dest[count]);
		count++;
	}
	ptr = ft_strncpy(dest, source, 11);
	printf("\n");
	count = 0;
	while(dest[count] != '\0')
	{
		printf("%c", dest[count]);
		count++;
	}
}
