#include<iostream>
#include<bits/stdc++.h>

using namespace std;

class MyBase{
    public:
        void show()
        {
            cout<<"Base classs show"<<endl;
        }
        virtual void print()
        {
            cout<<"Base classs print"<<endl;
        }
};

class MyDerive: public  MyBase
{
    public:
        void show()
        {
            cout<<"Derive class show"<<endl;
        }
        void print()
        {
            cout<<"Derive class print"<<endl;
        }
};

//Run-Time polymorphismusing function over riding
int main()
{
    MyBase *ptr;
    MyDerive obj;
    ptr = &obj;//ptr holding address of derived class  object so derived class functions should be ccalled
    ptr->print();//print is virtual in bsse so in this case the derived class print is  called
    ptr->show();//not a virtual function so base class show is  called
    return 0;
}