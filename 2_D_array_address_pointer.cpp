#include<iostream>
using namespace std;
void printa(int *arr, int n)
{
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<n;j++)
		{
			cout<<*(arr+i*n)+j<<" ";   //arr[i][j]
		}
		cout<<endl;
	}
}

int main()
{
    int arr[3][3]={{1,2,3},{4,5,6},{7,8,9}};
    int rows =  sizeof arr / sizeof arr[0]; 
	int cols = sizeof arr[0] / sizeof(int);
    cout<< arr[1][1];
    int *p = &arr[0][0];                //to traverse through values use row major indexing i.e  = [{B(base address)+i*n(no. of columns in array)}+j] 
    /*cout<<p<<endl;
    cout<<*(p+1*3)+0;   //the value arr[1][0]
    cout<<"\nrough = "<<5+6*2; */         //will first multiply an then add 
    printa(p, rows);
    return 0;
}


