#include<iostream>
#include<bits/stdc++.h>
using namespace std;

bool is_possible(string s, int length, int window_size, int k)
{
	int a_count = 0, b_count = 0;
	for(int i=0;i<window_size;i++){
		if(s[i]=='a'){
			a_count++;
		}
		else{
			b_count++;
		}
	}
	if(min(a_count, b_count)<=k){
		return true;
	}
	for(int i=0;i+window_size<length;i++){
		if(s[i]=='a'){
			if(s[i+window_size]=='b'){
				a_count--;
				b_count++;
			}
		}
		else{
			if(s[i+window_size]=='a'){
				b_count--;
				a_count++;
			}
		}
		if(min(a_count, b_count)<=k){
			return true;
		}
	}
	return false;
}

int main()
{
	string s = "aaaaaabbbbaaaaabbaaabbbbbbbbbaaa";
	int length = s.size();
	int k = 4;     //No. of maxm echanges allowed
	int low = 0, high = length;
	int mid;
	while(low<high){
		mid = (low+high)/2;
		if(is_possible(s, length, mid,  k)){
			low = mid+1;
		}
		else{
			high = mid-1;
		}
	}
	cout<<"maxm length  of window  after k exchanges = "<<high-low;
	return 0;
}
