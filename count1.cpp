#include<iostream>
using namespace std;
//int count_digit(int num);
int main()
{
    int num,count=0;
    cout<<"Enter Number : ";
    cin>>num;
    while(num)
    {
        num = num/10;
        count++;
    }
    cout<<count;
    //r = count_digit(num);
    //cout<<r;
    return 0;
    
}

/*int count_digit(int num)
{
    int m,count=0;
    m = num;
    while(num>0)
    {
        num = num%10;
        if(num)
        count++;
    }
    cout<<count;
}*/
