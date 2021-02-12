#include<iostream>
using namespace std;

int factorial(int n);

int main()
{
	int n,x;
	cout<<"Enter a number: ";
	cin>>n;
	x = factorial(n);
	cout<<"Factorial of "<<n<<" is "<<x;
	return 0;
}

int factorial(int n)
{
	if (n==0)
	return 1;
	else
	return n*factorial(n-1);
}
