int	ft_sqrt(int nb)
{
	int	i;

	i = 1;
	if (nb == 0)
		return (0);
	while (i * i < nb && i < 46341)
		i++;
	if (nb % i == 0)
		return (i);
	return (0);
}
/* #include <stdio.h>
int main (void)
{
	printf("%d", ft_sqrt(16));
}
 */
