#include<stdio.h>
int max(int a,int b)
{
	if(a>b) return a;
	else return b;
}
int main()
{
	int x,y,z;
	printf("input two numbers:\n");
	scanf("%d%d",&x,&y);
	z=max(x,y);
	printf("max=%d",z);
	return 0;
}