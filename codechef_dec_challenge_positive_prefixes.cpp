#include<iostream>
using namespacestd;

int main()
{
	int t;
	cin>>t;
	while(t)
	{
		int n,k;
		cin>>n,k;
		int a[n];
		int i=0;
		if(n==k)
		{
			for(i=0;i<n;i++)
			{
				a[i]=i+1;
			}
		}
		else
		{
			a[0]=1;
			if(k==(n/2))
			{
				if(n%2)          //n is odd
				{
					for(i=1;i<n;i++)
					{
						a[i] = (i+1)*pow(i,-1);
					}
				}
				else
				{
					for(i=1;i<(n-1);i++)
					{
						a[i] = (i+1)*pow(i,-1);
					}
					a[n-1] = -(n);
				}
			}
			else if(k<(n/2))
			{
				int count = 1;
				for(i=1;i<n;i++)
				{
					if(count<=k and (i%2)!=0)
					{
						a[i] = -(i+1);
					}
					else
				}
			}
		}
	}
}