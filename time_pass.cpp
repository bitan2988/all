#include<iostream>
using namespace std;
int main()
{
    int i,j,num,k,x,print=1;
    cout<<"Enter the value of num : ";
    cin>>num;
    for (i=1;i<=num;i++)
    {
        for (j=1;j<=i;j++)
        {
            cout<<print<<" ";
        }
        x = 2*(num-i);
        for (k=0;k<x;k++)
        {
            cout<<"  ";
        }
        for (j=1;j<=i;j++)
        {
            cout<<print<<" ";
        }

        cout<<"\n";
    }
    return 0;
}