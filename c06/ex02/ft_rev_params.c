#include <unistd.h>

int	main( int argc, char *argv[] )
{
	int size;
	int j;

	size = argc -1;

	while (size >= 1)
	{
		j = 0;
		while (argv[size][j])
		{
			write (1 ,&argv[size][j], 1);
			j++;
		}
		write (1, "\n", 1);
		size--;
	}
	return (0);
}
