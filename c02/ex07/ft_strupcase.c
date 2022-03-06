char *ft_strupcase(char *str)
{
	int index;

	index = 0;
	while (str[index] != '\0')
	{
		if(str[index] <= 'z' && str[index] >= 'a')
			str[index] = str[index] - 32;
		index++;
	}
	return (str);
}


#include <stdio.h>

int	main (void)
{
	char string[16] = "astol ph in ho";

	printf("%s", string);
	ft_strupcase(string);
	printf("%s", string);
}
