#include <iostream>
using namespace std;

int main()
{
    int a[100],m=0,u,l,n,i;
    cout<<"Enter Number of elements = ";
    cin>>n;
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }
    if(n>=5)
    {
		for(i=0;i<=n-5;i++)
    	{
        
			u = a[i]*a[i+1]*a[i+2]*a[i+3];
			l = a[i+1]*a[i+2]*a[i+3]*a[i+4];
        	//u = ;
        	m = m>(u>l?u:l)?m:(u>l?u:l);
		}
		cout<<"max = "<<m;
	}
	else if(n<4)
	{
		cout<<"No Quadlet";
	}
    else if(n==4)
    {
    	cout<<a[0]*a[1]*a[2]*a[3];
	}
    return 0;
}

