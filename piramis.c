
#include <stdio.h>

int main(int argc, char **argv)
{
	int n=15;
	for (int i = 0; i < n; i++)
	{	
		
		for (int j = 0; j < n-1-i; j++)
		{
				printf(" ");
		}
		for (int j = 0; j < (i*2)+1; j++)
		{
				printf("X");
		}
		printf("\n");
	}
	
	return 0;
}

