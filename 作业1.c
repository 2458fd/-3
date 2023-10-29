#include<stdio.h>
int main()
{
	int x1,x2,m,n;
	scanf("%d %d",&x1,&x2);
	if(x1<x2){
		m=x2;
		x2=x1;
		x1=m;
	}
	n=x1%x2;
	while(n!=0){
		x1=x2;
		x2=n;
		n=x1%x2;
	}
	printf("%d",x2);
	return 0;
}
