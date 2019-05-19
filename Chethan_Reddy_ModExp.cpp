#include<bits/stdc++.h>
#include<math.h>

using namespace std;

vector<int> bin(int n)
{
    vector<int> a;
    int k;
    while(n!=0)
    {k=n%2;
    a.push_back(k);
    n=n/2;
    }
    return a;
}

int rem(int n,int b,int d)
{int k;
    if(n==1)
    {
        return b%d;
    }
    else
    {
    	k=rem(n/2,b,d)*rem(n/2,b,d);
        return (k%d);
    }
    
}

int main()
{
    int n,b,d,product=1;
    vector<int> c;
    cout<<"Enter any number : ";
    cin>>b;
    cout<<"Enter the power of that number : ";
    cin>>n;
    cout<<"Enter the divisor : ";
    cin>>d;
    c=bin(n);
    for(int i=0;i<c.size();i++)
    {
        if(c[i]==1)
        {
            product*=rem(pow(2,i),b,d);
        }
        product=product%d;
    }
    cout<<product;
    return 0;
}
