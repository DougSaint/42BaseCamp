int	ft_recursive_factorial(int nb)
{
	int	rest;

	if (nb == 0 || nb == 1)
	{
		return (1);
	}
	if (nb < 0)
		return (0);
	else
	{
		rest = nb * ft_recursive_factorial(nb - 1);
	}
	return (rest);
}
/* #include <stdio.h>

int main(void)
{
	printf("%d", ft_recursive_factorial(8));
} */
