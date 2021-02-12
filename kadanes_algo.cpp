/*
-----------------Kadanes's Algorithm-------------------(To find maximum sub array)
Initialize:
    max_so_far = 0
    max_ending_here = 0

Loop for each element of the array
  (a) max_ending_here = max_ending_here + a[i]
  (b) if(max_so_far < max_ending_here)
            max_so_far = max_ending_here
  (c) if(max_ending_here < 0)
            max_ending_here = 0
return max_so_far
*/

#include<iostream>
using namespace std;

int main()
{
    int arr[100],n,i;
    int max_so_far = 0, max_ending_here = 0;
    cout<<"Enter Number of elements = ";
    cin>>n;
    for(i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    for(i=0;i<n;i++)
    {
        max_ending_here = max_ending_here + arr[i];
        if(max_ending_here < 0)
        {
            max_ending_here = 0;
        }
        else if(max_so_far < max_ending_here)               //To know the index where the max sub-array lies, just print the index where this else if condition happens 
        {
            max_so_far = max_ending_here;
        }
    }
    cout<<max_so_far;
    return 0;

}
