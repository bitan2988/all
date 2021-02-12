//https://www.codechef.com/submit/LOSTMAX

/*The Chef had a box with N numbers arranged inside it: A1, A2, ..., AN. 
He also had the number N at the front, so that he knows how many numbers are in it. 
That is, the box actually contains N+1 numbers. But in his excitement due the ongoing IOI, 
he started dancing with the box in his pocket, and the N+1 numbers got jumbled up. So now, 
he no longer knows which of the N+1 numbers is N, and which the actual numbers are.
He wants to find the largest of the N numbers.*/

#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int main() 
{
    int n,i,t;
    //int m,l,sm;
    //int flag; //To only once remove the lenght digit from the number
    //<<"Enter the number : ";
    cin>>t;
    for(int j=0;j<t;j++)
    {
        int n,i;
        int m=1,l,sm;
        int flag = 0; //To only once remove the lenght digit from the number
    //cout<<"Enter the number : ";
        cin>>n;
        l = int(floor(log10(n)));
        //cout<<"length = "<<l<<endl;
    //cout<<"pow = "<<pow(10,l)<<"  mod = "<<n%100<<endl;
        for(i=1;i<=l+1;i++)
        {
        
        //div = pow(10,i);
            sm = n%10;
            n = n/10;
            if(sm ==l && flag==0)
            {
                flag = 1;
            //cout<<"length = "<<l<<endl; 
            }
            else
            {
            //cout<<sm<<endl;
                m = max(m,sm);
            }
        }
        cout<<m<<endl;
    //m = max(l,m);
        
        }
    return 0;
  
}