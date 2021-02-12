#include<iostream>
#include<bits/stdc++.h>
using namespace std;

#define ll  long long

int main()
{
    ll m,div,l;
    ll sum = 0;
    cout<<"Enter in binary : ";
    cin>>m;
    l = floor(log10(m));
    for(int i=0;i<=l;i++)
    {
        
        div = m%10;
        m = m/10;
        if(div==1)
        {
            sum += pow(2,i);
        }
    }
    cout<<sum;
    return 0;
}