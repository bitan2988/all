#include<iostream>
#include<bits/stdc++.h>
using namespace std;

void permute(int a[],int n,int idx)
{
    int s = n;
    if(idx==s)
    {
        cout<<"\n";
        for(int j=0;j<s;j++)
        {
            cout<<a[j]<<" ";
        }
    }
    else
    {
        for(int i=idx;i<n;i++)
        {
            swap(a[idx], a[i]);  
  
            // Recursion called  
            permute(a, s, idx+1);  
  
            //backtrack  
            swap(a[idx], a[i]);
        }
    }
    
}

int main()
{
    int n;
    cin>>n;
    int arr[n];
    int i;
    for(i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    permute(arr,n,0);
    return 0;
}