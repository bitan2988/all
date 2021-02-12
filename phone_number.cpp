//Number combination
#include<iostream>
#include<vector>
#include<utility>
#include<bits/stdc++.h>

using namespace std;

//void bt(string s,string num);


int main()
{
    //bt("hello","hi");
    vector< pair<int, string> > v;
    v.push_back(make_pair(2,"abc"));
    v.push_back(make_pair(3,"def"));
    v.push_back(make_pair(4,"ghi"));
    v.push_back(make_pair(5,"jkl"));
    v.push_back(make_pair(6,"mnop"))
    v.push_back(make_pair(7,"qrst"));
    v.push_back(make_pair(8,"uvw"));
    v.push_back(make_pair(9,"xyz"));
    for(auto it=v.begin();it!=v.end();it++)
    {
        cout<<<<" ";
    }
    return 0;
}


/*void bt(string s,string num)
{
    vector<int, string> v;
    v.push_back(2, "abc");
    print(v[0]);
}*/
