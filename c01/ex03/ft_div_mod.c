/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dosantos <dosantos@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/11 17:46:25 by dosantos          #+#    #+#             */
/*   Updated: 2022/02/14 19:36:04 by dosantos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a / b;
	*mod = a % b;
}

#include <unistd.h>
#include <stdio.h>

int	main(void)
{
	int div;
	int mod;

	ft_div_mod(48, 24, &div, &mod);
	printf("%d, %d", div, mod);
}
