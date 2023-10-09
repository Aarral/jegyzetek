
#include <stdio.h>

int main(int argc, char **argv)
{
	int n=1000;
	int tomb[1000];
	for(int i=0;i<n;++i)
		tomb[i]=i;	
	for(int i=2;i<n;++i)
		for (int j=2;j<n;j++)
			if(tomb[i]%j==0&&i!=j){tomb[i]=-1;break;}
	for(int i=2;i<n;++i)
		if(tomb[i]!=-1)
		printf("%d ",tomb[i]);
	return 0;
}

