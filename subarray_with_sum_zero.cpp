//Subarray with sum zero and longest subarray with sum zero
//https://www.youtube.com/watch?v=xmguZ6GbatA&feature=emb_rel_end

/*
if we know that the whole part has a sum = s and then we come to know one sub-part has a sum of s of that array thus the rest leftover part must have a sum = 0
as s + 0 = s
*/

#include<iostream>
#include<bits/stdc++.h>
#include<unordered_map>
using namespace std;

int main()
{
    unordered_map<int, int> umap;   //map <sum, index> -->   umap<key, value>
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    int sum = 0;
    int maxi = 0;
    for(int i=0;i<n;i++)
    {
        sum = sum + arr[i];
        if(sum==0)
        {
            maxi = i+1;
        }
        else
        {
            if(umap.find(sum)!=umap.end())
            {
                maxi = max(maxi, i - umap[sum]);
            }
            else
            {
                umap[sum] = i;
            }
        }

    }
    return 0;
}