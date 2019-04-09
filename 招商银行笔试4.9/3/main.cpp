#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    vector<int> a,a1;
    int temp;
    int i;
    int sum1=0,sum2=0;
    int sum;
    for(i=0;i<n;i++)
    {
        cin>>temp;
        a.push_back(temp);
        a1.push_back(temp);
    }
    sort(a.begin(),a.end());
    sort(a1.begin(),a1.end());
    for(i=0;i<n;i++)
    {
        while(a[i]!=1)
        {
            a[i]/=2;
            sum1++;
        }
    }
    for(i=0;i<n;i++)
    {
        while(a1[i]!=a1[n-1])
        {
            a1[i]*=2;
            sum2++;
        }
    }
    sum=sum1<sum2?sum1:sum2;
    cout<<sum;
}
