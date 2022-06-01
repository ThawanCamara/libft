#include"libft.h"
#include<stdio.h>
#include<string.h>

 int main()
/* {
	int n = -1231345235;

	char *s = ft_itoa(n);
	printf("O: %s|\n", s);
} */
{
	//char *s = "      split       this for   me  !       ";
	char *s = " olol se l  ";
 	//printf("Start\n\n");
	char **result = ft_split(s, ' ');
	
	while (*result)
	{
		printf("|%s|\n", *result);
		result++;
	}
	
	return 0;
}