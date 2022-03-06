int ft_str_is_uppercase(char *str)
{
	int index;
	index = 0;

	while(str[index] != '\0')
	{
		if(str[index] > '126' && str[index] < '32')
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

	result = ft_str_is_printable(string);
	printf("%d", result);
} */
