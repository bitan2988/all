#include<iostream>
#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    int unsigned_bit = 0;
    cout<<"enter the number : ";
    cin>>n;
    while(n)                   //while True -> until the value is zero   
    {
        if((n&1)==0)           //upon peforming & operation with 0001 i.e 1 only the last bit will alter in the result. will return 0 if the number is even/last bit is un_set(0) and will return 1 if the number is odd/last bit is set(1)
        {
            cout<<"n = "<<n<<" ";
            cout<<(n&1)<<endl;
            unsigned_bit++;
        }
        n = n>>1;             //Just returning n/2 in every loop by right shifting one bit at a time.
    }
    cout<<"\nNo, of unsigned bit  = "<<unsigned_bit;
    return 0;
}