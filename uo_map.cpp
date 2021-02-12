#include<iostream>
#include<bits/stdc++.h>
#include<unordered_map>
using namespace std;

int main()
{
	unordered_map<int, int>  m;
	m[0] = 2;
	cout<<m[0];
	int key = 0;
	if(m.find(key) == m.end())
		cout<<m[0];
	else
		cout<<"present";
	return 0;
}
