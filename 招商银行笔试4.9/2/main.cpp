#include<bits/stdc++.h>
using namespace std;

int main()
{
    long n,w;
    cin>>n>>w;
    long i;
    vector<long> a;
    double water;
    long temp;
    for(i=0;i<2*n;i++)
    {
        cin>>temp;
        a.push_back(temp);
    }
    sort(a.begin(),a.end());
    long girlmin=a[0];
    long boymin=a[n];
        if((girlmin*2)>=boymin)//女生的两倍大于男生，按男生算
        {
            water=((double)boymin)/2*n;
            water+=boymin*n;
        }
        else//按女生算
        {
            water=girlmin*2*n+girlmin*n;
        }
        if(water>=w)
            water=w;
    printf("%.6f",water);
}
