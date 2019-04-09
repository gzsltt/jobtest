#include<bits/stdc++.h>
using namespace std;

long f(long x)
{
    long m=1;
    if(x==0)
        return 0;
    else if(x==1)
        return 1;
    else
    {
        for(long i=1;i<x;i++)
        {
            m*=2;
        }
    }
    return m;
}

int main()
{
    long sum=1;
    long n;
    cin>>n;
    long i;
    long num;
    for(i=n;i>=6;i--)
    {
        num=f(n-i);
        cout<<i<<" "<<num<<endl;;
        sum+=num;
    }
    sum=sum%666666666;
    cout<<sum;
}
