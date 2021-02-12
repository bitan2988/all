// https://www.youtube.com/watch?v=ggLGjf_XiNQ

#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int arr[10] = {1, 2, 3, 4, 5, 6, 7, 10, 9, 8};
    int n = sizeof(arr)/sizeof(arr[0]);
    int start, end, mid;
    start = 0;
    end = n;
    while(start<=end)
    {
        mid = (start+end)/2;
        if(arr[mid]>arr[mid+1])
        {
            cout<<"pivot element at index "<<mid;
            break;
        }
        else if(arr[start]<=arr[mid])
        {
            start = (mid+1);
        }
        else
        {
            end = mid-1;
        }
    }
    return 0;
}