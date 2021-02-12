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
    cout<<"Enter Number of elements = ";
    cin>>n;
    for(i=0;i<n;i++)
    {
        cin>>arr[i];
    }
}
