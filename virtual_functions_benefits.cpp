//https://www.youtube.com/watch?v=JU8DbwBvOWE

#include<iostream>
#include<bits/stdc++.h>

using namespace std;
//base class
class animal
{
    public:
        void food()
        {
            cout<<"Generic animal food"<<endl;
        }
        void sound()
        {
            cout<<"animal sound";
        }
};

class dog: public animal
{
    public:
        void food()
        {
            cout<<"Dog food"<<endl;
        }
        void sound()
        {
            cout<<"bowww boww";
        }
};

class cat: public animal
{
    public:
        void food()
        {
            cout<<"Cat food"<<endl;
        }
};
//BENEFITS OF VIRTUAL WE COULD HAVE TO CREATE THIS BELOW  FUNCTIONS FOR EVERY DERIVED CLASS IF VIRTUAL FUNCTIONS WERE NOT HERE TO 
void func(animal *xyz)      //accepts an object pointer of animal class
{
    xyz->food();
}

int main()
{
    animal *bptr;
    bptr->food();
    animal *ptr;
    cat objc;
    dog objd;
    bptr = &objc;         //functions with virtual(in base) are not called 
    bptr->food();
    bptr = &objd;
    bptr->food();
    objd.food();
    bptr->sound();

    return 0;
}