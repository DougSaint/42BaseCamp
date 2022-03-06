int	ft_iterative_factorial(int nb)
{
	int	rest;

	rest = 1;
	if (nb == 0 || nb == 1)
		return (1);
	if (nb < 0)
		return (0);
	while (nb > 0)
	{
		rest = rest * nb;
			nb = nb - 1;
	}
	return (rest);
}
/* #include <stdio.h>
int main(void)
{
	printf("%d", ft_iterative_factorial(9));
}
 */
