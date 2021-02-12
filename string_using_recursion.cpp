#include<iostream>
#include<bits/stdc++.h>

using namespace std;

void permute(string s, string ans, int l)
{
    l = s.length()
    if(l==1)
    {
        cout<<ans;
    }
    for(int i=0;i<l;i++)
    {
        ans = ans+s[i];
        s.substr()
        permute()
    }
    
}

int main()
{
    string s,ans;
    getline(cin, s);
    permute(s,ans,10);
    return 0;
}