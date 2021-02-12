/*Louise and Richard have developed a numbers game. They pick a number and check to see if it is a power of . If it is, they divide it by . If not, they reduce it by the next lower number which is a power of . Whoever reduces the number to  wins the game. Louise always starts.

Given an initial value, determine who wins the game.

As an example, let the initial value . It's Louise's turn so she first determines that  is not a power of . The next lower power of  is , so she subtracts that from  and passes  to Richard.  is a power of , so Richard divides it by  and passes  to Louise. Likewise,  is a power so she divides it by  and reaches . She wins the game.

Update If they initially set counter to , Richard wins. Louise cannot make a move so she loses.
*/


#include<iostream>
#include<bits/stdc++.h>

using namespace std;

int bin(int n);

int main()
{
    int n;
    int i=0,j=0,l;
    cout<<"Enter the decimal : ";
    cin>>n;
    bin(n);
    return 0;
}

int bin(int n)
{
    int r,t;
    t=n;
    int i=0,z=0,o=0,l;
    while(n>0)
    {
        r=t%2;
        if (r==0)
        {
            z++;
        }
        else
        {
            o++;
        }
        t = t/2;
        i++;
    }
    l = i-1;
    if(o==1)
    {
        //return n;

    }
    else
    {
       t = n - pow(2,l);
       cout<<t;
       //return t; 
    }
    return 0;

}

