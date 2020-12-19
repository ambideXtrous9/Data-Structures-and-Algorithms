#include<stdio.h>
#include<stdlib.h>

void dectobin(int n)
{
	int i=0;
	int temp[1000];
	while(n)
	{
		temp[i] = n%2;
		n=n/2;
		i++;
	}
	int j;
	for(j=0;j<i;j++)
	{
		printf("%d",temp[i-1-j]);
	}
	printf("\n");
}

int main(int argc, char *argv[])
{
	if (argc<2)
	{
		printf("INVALID INPUT\n");
	}

	int n = atoi(argv[1]);
	dectobin(n);
	return 0;
}
