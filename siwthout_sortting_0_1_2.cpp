#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int a[10] = {0,1,2,0,0,0,1,2,0,1};
    //a[0]=0;
    int i;
    int low=0,mid = 0,high;
    high = 9;      //last index
    while(mid<=high)
    {
       if(a[mid]==0)
       {
           swap(a[mid++],a[low++]);
       }
       else if(a[mid]==1)
       {
           mid++;
       } 
       else
       {
           swap(a[mid],a[high--]);
       }
       
    }
    cout<<endl;
    for(i=0;i<10;i++)
    {
        cout<<a[i]<<" ";
    }
    return 0;
}



