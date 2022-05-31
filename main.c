#include"libft.h"
#include<stdio.h>
#include<string.h>

int main()
{
	char s1[20] = "abcdef";
	char c = '\0';

	printf("%s\n", strchr(s1, c));
	printf("%s\n", ft_strchr(s1, c));
	return 0;
}