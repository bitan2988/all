#include<iostream>

using namespace std;

int main()
{
    int m;
    int * p;
    cout<<"Enter number";
    cin>>m;
    p=&m;                            //&m = address of m
    cout<<"\np = "<<p;              //p = address of m
    cout<<"\n*p = "<<*p;            //*p = (derefferencing pointer p)value stored at address held by p
    cout<<"\n&p = "<<&p;            //&p = address of pointer p
    cout<<"\n&*p = "<<&*p;          //&*p = address of value stored at address held by p
    return 0;
}