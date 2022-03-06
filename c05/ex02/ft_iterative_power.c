int	ft_iterative_power(int nb, int power)
{
	int	i;
	int	j;

	j = nb;
	i = 1;
	if (nb == 0 && power == 0)
		return (1);
	if (power < 0)
		return 0;
	while (power > i)
	{
		nb = nb * j;
		power--;
	}
	return (nb);
}
#include <stdio.h>
int main (void)
{
	printf("%d", ft_iterative_power(8,-1));
}
