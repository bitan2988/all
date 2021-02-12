#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    string name,name_1,name_2;
    int i,j;
    cin>>name;
    //getline(cin, two_name);
    //cout<<"\n"<<name;
    //cout<<"\n"<<two_name;
    for (i=0;i<name.length();i++)
    {
        if(name[i]==',')
        {
            for(j=0;j<i;j++)
            {
                name_1=name_1+name[j];
            }
            for(j=i+1;j<name.length();j++)
            {
                name_2=name_2+name[j];
            }
        }
    }
    cout<<"\n name_1 = "<<name_1;
    cout<<"\n name_2 = "<<name_2;
    cout<<"\n length = "<<name.length();
    //cout<<"\n"<<name[2]<<"--"<<name[3];
    return 0;
}