#include"libft.h"
#include<stdio.h>
#include<string.h>

static void	setnbr(int num, const char *s, int i)
{
	if (num >= 10)
		setnbr(num / 10, (s + i), i);
	*(char *) (s + i) = num % 10 + '0';
}

int main()
{
	int n = 4231;
	char s[30] = "00000000";

	setnbr(n, s, 0);
	printf("%s\n", s);
}