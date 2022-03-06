char *ft_strcpy(char *dest, char *src)
{
	int index;

	index = 0;
	while(src[index] != '\0')
	{
		if(src[index] >= '0' && src[index] <= '9' )
			dest[index] = src[index];
		index++;
	}
	dest[index] = '\0';
	return (dest);
}

#include	<stdio.h>

int	main(void)
{
	char string[15] = "3a33";
	char dest[11];
	char *ptr;

	ptr = ft_strcpy(dest, string);
	printf("%s\n", ptr);
}
