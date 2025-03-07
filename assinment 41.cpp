#include <stdio.h> 
int main()
{
	int n=4;
	int i,j;
	for(i=1;i<=n;i++)
	{
		for(j=1;j>=n;j--)
{
	if(i>=j)
		printf("*");
	else
		printf("a");
	}
	printf("\n");
}
return 0;
}
