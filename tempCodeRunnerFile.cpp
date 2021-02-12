#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int n;
    cin>>n;
	int a[n];
	for(int i=0;i<n;i++){
	    cin>>a[i];
	}
	sort(a, a+n);
    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
    }
    cout<<endl;
    int x,y,z;
	x = a[0];
    z = a[n-1];
    int i=0;
    while(a[i]==x){
        i++;
    }
    cout<<"i = "<<i<<endl;
    if(a[i]==z or i==n-1){
        y = x;
    }
    if(i==1){
        y = a[1];
    }
    cout<<x<<" "<<y<<" "<<z;
	return 0;
}
