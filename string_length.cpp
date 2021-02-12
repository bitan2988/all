#include<iostream>
#include<bits/stdc++.h>
#include<algorithm>
using namespace std;
int main()
{
    string a,b;
    int i;;
    getline(cin, a);
    getline(cin, b);
    cout<<"a = "<<a;
    cout<<"\nb = "<<b;
    /*for (int i=0;i<a.length();i++)
    {
        if (islower(a[i]))
        {
            a[i] = char(int(a[i])-32);
        }
    }*/
    //count = 0;
    //max = 0;
    for(i=0;a[i]!='\0';++i);
    //cout<<"\nA = "<<a;
    cout<<"length = "<<i;
    return 0;
}