#include<stdio.h>
void main()
{
	int a,b,c;
	
	a = 600;
	b = 50;
	c = 30;
	
	printf("a = %d\nb = %d\nc = %d\n",a,b,c);
	
	printf("%d\n%d\n",(a>b)&&(b>c),(a>b)&&(b<c));
	
	printf("%d\n%d\n",(a>b)&&(b>c),(a<b)&&(b<c));
	
	printf("%d\n%d\n",(a>b)||(b>c),(a>b)||(b<c));
	
	printf("%d\n%d",(a>b)||(b>c),(a<b)||(b<c));
	
	
	
	
	
	
}
