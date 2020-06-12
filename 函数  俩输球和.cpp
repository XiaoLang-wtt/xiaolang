#include<stdio.h>
int add(int a,int b)
{int c;
c=a+b;
return c;
}
int main(void)
{int a,c;char b;
for(c=0;getchar()!='\n';) 
{
scanf ("%d",&a);
c=add(a,c);
}
printf("   %d    ",c);	
	
	
}
