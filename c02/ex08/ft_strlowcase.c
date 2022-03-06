char *ft_strlowcase(char *str)
{
	int index;

	index = 0;
	while (str[index] != '\0')
	{
		if(str[index] <= 'Z' && str[index] >= 'A')
			str[index] = str[index] + 32;
		index++;
	}
	return (str);
}

#include <stdio.h>

int	main (void)
{
	char string[12] = "Astolphinho";

	printf("%s", string);
	ft_strlowcase(string);
	printf("%s", string);
}
