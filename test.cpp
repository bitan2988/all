//https://www.youtube.com/watch?v=SiE1XFhYoaA
//https://www.geeksforgeeks.org/place-k-elements-such-that-minimum-distance-is-maximized/

#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int barn[5] = {1, 2, 8, 4, 9};
    int cow = 3;
    int n = sizeof(barn)/sizeof(barn[0]);
    int low = barn[0];
    int high = barn[n-1];
    int best = 0, mid;
    sort(barn, barn+n);
    while(low<high)
    {
		mid = (high+low)/2; 
		cout<<"mid = "<<mid<<" low = "<<low<<" high = "<<high<<endl;
        int left = 0, count = 1;
        for(int i=1; i<n; i++)
        {
            if ((barn[i]-barn[left])>= mid)
            {
                left = i;
                count++;
            }
        }
        if(count>=cow)
        {
            low = mid+1;
            best = max(best, mid);
        }
        else
        {
		high = mid-1;
		}
    }
    cout<<"output = "<<best;
    return 0;
}



