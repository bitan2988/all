#include<iostream>
#include<bits/stdc++.h>
using namespace std;

# define R 4
# define C 4

void spiral(int a[R][C]);

int main()
{
    int a[R][C] = {{1,2,3,4},
                    {5,6,7,8},
                    {9,10,11,12},
                    {13,14,15,16}};
    cout<<a[R-1][C-1];
    spiral(a);
    return 0;

}

void spiral(int a[R][C])
{
    int i;
    int k=0,l=0;
    int m=4,n=4;
    if(k>m or l<n)
    {
        return;
    }
    while(k<m and l<n)
    {
        for(i=k;i<m;i++)
        {
            cout<<a[i][l]<<" ";
        }
        k++;

        for(i=l;i<n;i++)
        {
            cout<<a[k][n-1]<<" ";
        }
        n--;
    }
    if(k<m)
    {
        for(i=m-1;i>=k;i--)
        {
            cout<<a[i][l]<<" ";
        }
        m--;
    }
    if(l<n)
    {
        for(i=n-1;i>=l;i--)
        {
            cout<<a[m-1][i]<<" ";
        }
        l++;
    }

}