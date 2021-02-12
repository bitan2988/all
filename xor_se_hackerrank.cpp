//https://www.hackerrank.com/challenges/xor-se/problem

#include<iostream>
#include<bits/stdc++.h>

using namespace std;

int retxor(int n)
{
    int d;
    d = n%4;
    if(d==0)
    {
        return n;
    }
    else if(d==1)
    {
        return 1;
    }
    else if(d==2)
    {
        return n+1;
    }
    else
    {
        return 0;
    }
}

int main()
{
    int arr[50];
    arr[0]=0;
    int l,r,i;
    int t,s;
    cin>>l>>r;
    for (i=1;i<50;i++)
    {
        arr[i]=arr[i-1]^i;
    }
    t = l/8;
    s = r/8;
    int xrem=0;
    for(int j=l;j<8*(t+1);j++)
    {
        xrem = xrem^retxor(j);
    }
    for(int k=8*s;k<=r;k++)
    {
        xrem = xrem^retxor(k);
    }
    cout<<"\nOutput = "<<xrem;
    return 0;
}