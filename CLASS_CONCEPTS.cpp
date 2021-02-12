#include<iostream>
#include<bits/stdc++.h>

using namespace std;

class stud
{
    private:
        virtual int func(int a, int b)
        {
            int d = a+b;
            cout<<d;
            return d;
        }
    public:
        void func2()
        {
            cout<<func(10, 5);
        }
        
    protected:
        void printme()
        {
            cout<<"\nA protected memmber of class stud";
        }
};

class dstud: public stud
{
    private:
        void sec()
        {
            string secret = "HELLO THIS IS A SECRET STRING OF STDUD";
            cout<<secret;
        }
    public:
        void printme1()
        {
            printme();
        }
        void func(int a, int b)
        {
            cout<<"\nVirtual  function of dstud";
        }
};

class ddstud: public dstud
{
    public:
        virtual void sec2()
        {
            cout<<"HELLO YOU ARE IN DDSTUD";
        }
};

int main()
{
    stud obj1;
    dstud obj2;
    obj1.func2();
    obj2.printme1();
    obj2.func(11,12);
    /*stud *obj;
    dstud obj3;
    obj =  &obj3;*/
    return 0;
}