//https://www.youtube.com/watch?v=4ggF3tXIAp0

#include<iostream>
#include<bits/stdc++.h>
using namespace std;

void fs(int a[],int n,int i,int j,int l, int r,int target);

int main()
{
    int a[6] = {1,0,-1,0,-2,2};
    int target = 0;
    int n = sizeof(a)/sizeof(a[0]);
    sort(a,a+n);
    int i=0;
    int j = i+1;
    fs(a,n,i,j,j+1,n-1,target);
    return 0;
}

void fs(int a[],int n,int i,int j,int l, int r,int target)
{
    while(i<n)
    {
        j = i+1;
        while(j<n)
        {
            l = j+1;
            r = n-1;
            while(l<r)
            {
                if((a[i]+a[j]+a[l]+a[r])==target)
                {
                    cout<<a[i]<<" "<<a[j]<<" "<<a[l]<<" "<<a[r]<<endl;
                    int temp = a[l];
                    while(l<r and a[l]==temp)
                    {
                        l++;
                    }
                    temp = a[r];
                    while(l<r and a[r]==temp)
                    {
                        r--;
                    }
                }
                else if((a[i]+a[j]+a[l]+a[r])>target)
                {
                    r--;
                }
                else
                {
                    l++;
                }
            }
            j++;
            while(j<n and a[j-1]==a[j])
            {
                j++;
            }
        }
        i++;
        while(i<n and a[i-1]==a[i])
        {
            i++;
        }
    }
}