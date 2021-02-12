#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int main() {
	int t;
	int n,l,f,le;
    cout<<"Enter test cases = ";
    cin>>t;
	for(int i =0;i<t;i++)
	{
	    cout<<"Enter Number";
        cin>>n;
        l=n%10;
	    le = floor(log10(n))+1;   //length of the number
        cout<<"\n length = "<<le;
	    f=floor(n/(pow(10,le-1)));
        cout<<"last = "<<l<<" f = "<<f;
	    cout<<"SUM = "<<l+f<<endl;
	    
	}
	return 0;
}
