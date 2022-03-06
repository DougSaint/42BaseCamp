/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dosantos <dosantos@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/13 06:01:59 by dosantos          #+#    #+#             */
/*   Updated: 2022/02/17 22:02:39 by dosantos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char *str)
{
	int	count;

	count = 0;
	while (str[count] != '\0')
	{
		count++;
	}
	return (count);
}

char	*ft_strcat(char *dest, char *src)
{
	unsigned int	dest_len;
	unsigned int	i;

	dest_len = ft_strlen(dest);
	i = 0;
	while (src[i] != '\0')
	{
		dest[i + dest_len] = src[i];
		i++;
	}
	dest[i + dest_len] = '\0';
	return (dest);
}

#include <stdio.h>
#include <string.h>
int main ()
{
	char src[50] = "xxxxx";
	char dest[50] = "aaaaaa";

	printf("Final destination string : |%s|\n", ft_strcat(dest, src));

	*src = "xxxxx";
	*dest = "aaaaaa";
	printf("Final destination string : |%s|\n", strcat(dest, src));
   return(0);
}

