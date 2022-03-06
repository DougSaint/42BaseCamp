/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dosantos <dosantos@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/16 16:47:54 by dosantos          #+#    #+#             */
/*   Updated: 2022/02/17 21:50:44 by dosantos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	index;

	index = 0;
	if (n == 0)
		return (0);
	while (s1[index] == s2[index] && (index < n - 1) && s1[index])
		index++;
	return (s1[index] - s2[index]);
}

#include <stdio.h>
#include <string.h>

int main () {
   char str1[15] = "aab";
   char str2[15] = "aac";

	printf("%d", strncmp(str1, str2, 2));
	printf("%d", ft_strncmp(str1, str2, 2));

   return(0);
}
