#include<iostream>
using namespace std;
int width,height;
int count=0;

int visible_face(int w,int h,int arr[100][100],int i,int j);

int main()
{
    int w,h;
    int ul;
    cout<<"Enter the size of the array ";
    cin>>w>>h;
    int a[w][h];
    width = w;
    height = h;
    for (int i=0;i<w;i++)
    {
        for (int j=0;j<h;j++)
        {
            cin>>a[i][j];
        }
    }
    cout<<"OUTPUT\n";
    for (int i=0;i<w;i++)
    {
        for (int j=0;j<h;j++)
        {
            visible_face(w,h,a,i,j);
        }
        cout<<"\n";
    }
    //visible_face(a,0,0);
    ul = 2*w*h;

    return 0;
    
}

int visible_face(int w,int h,int a[w][h],int i,int j)
{
    if(i+1<width)
    {
        if((a[i][j]-a[i+1][j])<0)
        {
            count +=(a[+1][j]-a[i][j]);
        }
        else if((a[i][j]-a[i+1][j])>0)
        {
            count +=(a[i][j]-a[i+1][j]);
        }
        
    }
    if(j+1<height)
    {
        if((a[i][j]-a[i][j+1])<0)
        {
            count +=(a[i][j+1]-a[i][j]);
        }
        else if((a[i][j]-a[i][j+1])>0)
        {
            count +=(a[i][j]-a[i][j+1]);
        }
        
    }
    cout<<"\n"<<count;
}
