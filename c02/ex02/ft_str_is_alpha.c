int ft_str_is_alpha(char *str)
{
	int index;

	index = 0;
	while(str[index] != '\0')
	{
		if(!((str[index] <= 'z' && str[index] >= 'a')
			|| (str[index] <= 'Z' && str[index] >= 'A')))
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
	char string[12] = "Astolphinh0";
	int result;

	result = ft_str_is_alpha(string);
	printf("%d", result);
}
 */
