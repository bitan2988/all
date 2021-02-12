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
    int ans = -1;
    cout<<endl;
    int x,y,z;
	x = a[0];
    z = a[n-1];
    //(abs(x-y)+abs(y-z)+abs(z-x))
    //in order to maximise this function we will have to maximise any two part
    // i.e we will get    x-y+y-z+z-x  ==>  x+z z-x   ==> taking abs we get
    // abs(x+z)+abs(z-x) = 2*abs(z-x)
    // thus we will take the max and the min element of the array
    cout<<m;
	return 0;
}
