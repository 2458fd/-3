#include<stdio.h>
int main()
{
	int a,b,c;
	int t=0;
	scanf("%d %d %d",&a,&b,&c);
	
	if(a<b){
		t=a;
		a=b;
		b=t;
	}
	if(a<c){
		t=a;
		a=c;
		c=t;
	}
	if(b<c){
		t=b;
		b=c;
		c=t;
	}
	t=a*100+b*10+c;
	
	printf("%d",t);
	return 0;
}
