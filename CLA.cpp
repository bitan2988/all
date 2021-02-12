//Command Line Arguments
#include<iostream>
#include<cstdlib>
using namespace std;

int main(int argc,char * argv[])            // argc->total number of inputs entered into cmd      argv->stores the data from index 1
{
    int i,sum=0;
    if (argc==1)
    {
        cout<<"One Value";
    }
    else
    {
        for(i=1;i<argc;i++)
        {
            cout<<"\n"<<atoi(argv[i]);
            sum += atoi(argv[i]);
        }
    }

    cout<<sum;
    //cout<<argv[2]+argv[3]<<"ADD";
    return 0;
}