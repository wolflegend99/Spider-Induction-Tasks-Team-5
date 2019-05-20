#include<stdio.h>
#include<conio.h>
int rem (int c, int d,int t, int& res)
{
	d=d%c;
	if(t==1)
	{
	 res=res*d;	
	}
	d=d*d;
	return d;
	
}
int main()
{
	int i,k,a,b,b1,c,bin[100],ans,res=1,m=1;
	printf("Enter a,b,c as a^b mod c");
	scanf("%d %d %d",&a,&b,&c);
	b1=b;
	i=0;
	
	while(b1>0)
	{
	bin[i]=b1%2;
	b1=b1/2;
	i++;	
	}
	for(k=0;k<i;k++)
	{
	a=rem(c,a,bin[k],res);
	}
	ans=res%c;
	printf("The result is %d",ans);
	return 0;
	
}
