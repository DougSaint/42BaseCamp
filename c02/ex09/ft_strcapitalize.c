char *ft_strcapitalize(char *str)
{
	int index;
	int check;

	check = 0;
	index = 0;
	while(str[index] != '\0')
	{

		if(str[index-1] != 'a' && '')
			check = 0;

		if(str[index] >= 'a' && str[index] <= 'z' && check == 0)
		{
			str[index] = str[index] - 32;
			check = 1;
		}
		if(!(str[index-1] >= 'a' && str[index-1] <= 'z'))
			check = 1;
		index++;
	}
	return (str);
}
#include <stdio.h>

int main (void)
{
	char string [] = "OI, tuDo bEm? 42palavras quarenta-e-duas; cinquenta+e+um";
	char* result;

	result = ft_strcapitalize (string);
	printf("%s", result);
}
