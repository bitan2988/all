//Optimised way of finding prime numbers using sieve of Eratosthenes
#include<iostream>
//#include<cstdlib>
#include<bits/stdc++.h>
#include<cmath>
using namespace std;

int main(int argc, char * argv[])
{
    int l,u,a[1000],i,j;
    l = atoi(argv[1]);   //as argv[0] holds the name of the program in string format
    cout<<"Enter upper range : ";
    cin>>u;
    a[0]=0;
    a[1]=0;
    for (i=2;i<=u;i++)               //Create an array where index denotes the number and if holds 1 then it is prime and if it holds 0 then its non-prime
    {
        a[i]=1;
    }
    for (i=2;i<=sqrt(u);i++)         //the greatest numbers by which another number can be completely divided lies between zero and in its root value
    {
        if(a[i]==1)
        {
            for(j=i;j*i<=u;j++)       //Finding the multiples, as multiples of a number can never be prime
            {
                a[i*j]=0;
            }
        }
    }
    for(i=2;i<=u;i++)
    {
        if(a[i]==1)
        {
            cout<<"-"<<i;
        }
    }
    return 0;


}