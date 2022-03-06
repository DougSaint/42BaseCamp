/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dosantos <dosantos@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/13 06:02:06 by dosantos          #+#    #+#             */
/*   Updated: 2022/02/17 21:46:39 by dosantos         ###   ########.fr       */
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

char	*ft_strncat(char *dest, char *src, unsigned int nb)

{
	unsigned int	index;
	unsigned int	sized;

	sized = ft_strlen(dest);
	index = 0;
	while (src[index] != '\0' && index < nb)
	{
		dest[sized + index] = src[index];
		index++;
	}
	dest[sized + index] = '\0';
	return (dest);
}

/* #include <stdio.h>
#include <string.h>

int main () {
   char src[50], dest[50];

   strcpy(src,  "This is sourcehhhhh");
   strcpy(dest, "This is destination");

   ft_strncat(dest, src, 5);

   printf("Final destination string : |%s|", dest);

   return(0);
}
 */
