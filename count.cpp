#include<iostream>
using namespace std;
int count_digit(int num);
int main()
{
    int num,r;
    cout<<"Enter Number : ";
    cin>>num;
    r = count_digit(num);
    cout<<r;
    return 0;
}

int count_digit(int num)
{
    int m,count=0;
    m = num;
    while(num!=0)
    {
        num = num/10;
        ++count;
    }
    return (count);
}