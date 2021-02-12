#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(int argc, char* argv[])
{
    string f;
    string a[3] = {"Bitan", "Sarkar", "is"};

    for (int i=0;i<3;i++)
    {
        f = f +" "+a[i];
    }
    cout<<f;
    return 0;
    
}