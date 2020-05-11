#include<stdio.h>

#define lengh 12

char t[150]=" ababaaababaa";
char next[150];
int main(void) 
{
	int i =1; next[1] = 0; int j = 0;
	while(i < lengh)
	{ 	if(j ==0 || t[i] == t[j])
		{++i; ++j; next[i]=j;}
		else
			j = next[j];
	}
	for(int m=1;m<=lengh;m++)
	{
		printf("[%d]=%d ",m,next[m]);
	}
	printf("\n");
	printf("next数组的值为：");
	for(int m=1;m<=lengh;m++)
	{
		printf("%d",next[m]);
	}
	return 0;
} 

