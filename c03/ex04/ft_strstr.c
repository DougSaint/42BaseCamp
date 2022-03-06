/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dosantos <dosantos@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/14 20:31:31 by dosantos          #+#    #+#             */
/*   Updated: 2022/02/16 17:24:40 by dosantos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(char *str, char *to_find)
{
	int	ind1;
	int	ind2;

	if (to_find[0] == '\0')
		return (str);
	ind1 = 0;
	while (str[ind1] != '\0')
	{
		ind2 = 0;
		while (str[ind1 + ind2] == to_find[ind2])
		{
			if (to_find[ind2 + 1] == '\0')
				return (&str[ind1]);
			ind2++;
		}
		ind1++;
	}
	return (0);
}

/* #include <stdio.h>

int	main()
{
	char str[] = "tesouro";
	char fnd[] = "ou";
	printf("os portugueses usurparam nosso %s \n", ft_strstr(str, fnd));
	return (0);
} */
