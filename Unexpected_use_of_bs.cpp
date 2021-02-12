//https://www.youtube.com/watch?v=BMilsTX0CW8
#include<iostream>
#include<bits/stdc++.h>
using namespace std;

bool binarys(string s, int length, int k, int mid)
{
	int n = length;
	int window_size = mid;
	int a=0,b=0;
	for(int i=0;i<window_size;i++){
		if(s[i]=='a')
			a++;
		else
			b++;
	}
	if((min(a,b))<=k)
		return true;
	for(int i=1;i+window_size<n;i++){
		if(s[i]=='a')
			a--;
		else
			b--;
		if(s[i+k]=='a')
			a++;
		else
			b++;
		if((min(a,b))<=k)
			return true;

	}
	return false;
}

int main()
{
	string s;
	int k;
	getline(cin, s);
	cin>>k;
	int n = s.size();
	int low=0,high=n;
	int mid;
	while(low<high){
		mid = (low+high)/2;
		if(binarys(s, n, k, mid))
			low = mid+1;
		else
			high = mid-1;
	}
	cout<<mid;
	return 0;
}
