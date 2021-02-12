//https://www.youtube.com/watch?v=V5-7GzOfADQ
//https://www.youtube.com/watch?v=GTJr8OvyEVQ --> how to make the pi table

#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main()
{
    string pat;
    //n = s.size();
    pat = "aabaabaaa";
    int m = pat.size();
    int pi[m];
    int j = 0, i=1;
    pi[0] = 0;
    while(i<m)
    {
        if(pat[i]==pat[j])
        {
            pi[i]=j+1;
            i++;
            j++;
        }
        else
        {
            if(j-1>=0)
            {
                j = pi[j-1];
                i++;
            }
            else
            {
                j = 0;
                i++;
            }
            
        }
        
    }
    for(int k=0;k<m;k++)
    {
        cout<<pi[k]<<" ";
    }
    return 0;



}