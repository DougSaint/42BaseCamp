int	ft_fibonacci(int index)
{
	if (index == 0 || index == 1)
		return (0);
	if (index == 2)
		return (1);
	return (ft_fibonacci (index - 1) + ft_fibonacci (index - 2));
}

/* #include <stdio.h>

int main (void)
{

	printf("%d", ft_fibonacci(7));
}
 */
