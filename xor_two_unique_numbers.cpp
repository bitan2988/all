//Given an array find the two unique numbers. other numbers appear twice in the array


#include<iostream>
#include<bits/stdc++.h>

using namespace std;

int setbit(int num, int posit)
{
    return ((num>>posit)&1);             //performs and with the bit at position 'posit' with 1 thus returning one if the bit was set and zero if it was not set
}

int uni(int arr[], int n)
{
    int xorsum = 0;
    int i =0;
    for(i=0;i<n;i++)
    {
        xorsum = xorsum^arr[i];         //peroform xor of the whole array and return the xor of the two unique numbers present in the array
    }
    int tempxor = xorsum;
    int position = 0;
    while((xorsum&1)!=0)
    {
        position++;
        xorsum = xorsum>>1;            //check for the rightmost set bit in xorsum
    }
    int newxor = 0;
    for(i=0;i<n;i++)
    {
        if(setbit(arr[i],position-1))
        {
            newxor = newxor^arr[i];             //perform xor betweeen all the elements that have set bit at position "position"
        }
    }
    int n1, n2;
    n1 = newxor;
    n2 = (newxor^tempxor);                  //xor of the unique number one and the xorsum will result in the second number
    cout<<n1;
    cout<<"\n"<<n2;
    return 0;
}




int main()
{
    int arr[]={1,2,3,4,5,6,7,5,4,3,2,1};
    uni(arr,12);
    return 0;
}