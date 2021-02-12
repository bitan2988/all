//https://www.youtube.com/watch?v=RORuwHiblPc&t=799s

#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cout<<"enter n: ";
    cin>>n;
    int s[n];
    cout<<"enter the elements: ";
    for(int k=0;k<n;k++)
    {
        cin>>s[k];
    }
    cout<<"Enter maximum space in a row: ";
    int m;
    cin>>m;
    int dp[n][n];
    int i,j;
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            dp[i][j] = -1;
        }
    }
    int su;
    for(i=0;i<n;i++)
    {
        su = 0;
        for(j=i;j<n;j++)
        {
            su +=s[j];
            if(su<=m)
            {
                dp[i][j] = (m-su);
            }
        }
    }
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            cout<<dp[i][j]<<"  ";
        }
        cout<<"\n";
    }
    int it[n], res[n];
    i = n-1;
    j = n-1;
    while(i>=0 and j>=0)
    {
        if(dp[i][j]>=0)
        {
            it[i]=dp[i][j];
            i--;
            res[i]=j+1;
        }
        else
        {
            j--;
        }
        
    }
    cout<<" iterator array"<<endl;
    for(i=0;i<n;i++)
    {
        cout<<it[i]<<"  ";
    }
    cout<<"\n RESULT \n";
    for(i=0;i<n;i++)
    {
        cout<<res[i]<<"  ";
        

    }
    
    return 0;
    
    

}