#include<iostream>
#include<math.h>
long int modexp(long int p,long int q,long int r)
{
   int m;
   if (r==1)
   	return 0;
   else
   {
   	 m=1;
   	 p=p%r;
   	 while (q>0)
   	 {
   		if(q&1)
   		 m=(m*p)%r;
   		q=q>>1;
   		p=(p*p)%r;
   		
     } 
   }
    return m;
}

int main()
{
	long int a,b,c;
	std::cout<<"Enter a number, its power and the divisor";
	std::cin>>a>>b>>c;
	
	a=modexp(a,b,c);
	std::cout<<a;
	return 0;
}
