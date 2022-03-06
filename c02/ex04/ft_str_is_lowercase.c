int ft_str_is_lowercase(char *str)
{
	int index;
	index = 0;

	if(str[index] == '\0')
		return (1);
	while(str[index] != '\0')
	{
		if(!(str[index] <= 'z' && str[index] >= 'a'))
		{
			return (0);
		}
		index++;
	}
	return (1);
}

/* #include <stdio.h>

int main(void)
{
	char string[12];
	int result;

	result = ft_str_is_lowcase(string);
	printf("%d", result);
} */
