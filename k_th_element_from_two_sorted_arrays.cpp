// Program to find k-th element from two sorted arrays
//https://www.youtube.com/watch?v=Q3JUfHpffIg
//https://www.youtube.com/watch?v=tmu50Fs4v54

#include <iostream>
using namespace std;

int kth(int *arr1, int *arr2, int *end1, int *end2, int k)
{
	//cout<<arr1<<endl;
    //cout<<arr2<<endl;
    
    if (arr1 == end1) //start = end 
		return arr2[k];
	if (arr2 == end2)
		return arr1[k];
	int mid1 = (end1 - arr1) / 2;  //index of mid
	int mid2 = (end2 - arr2) / 2;
	if (mid1 + mid2 < k)  
	{
		
        if (arr1[mid1] > arr2[mid2]) // we have lesser elements to work with than the index
			return kth(arr1, arr2 + mid2 + 1, end1, end2, k - mid2 - 1);  //as elements with lesser value lies on the right of second array
		else
			return kth(arr1 + mid1 + 1, arr2, end1, end2, k - mid1 - 1);
	}
	else
	{
		if (arr1[mid1] > arr2[mid2])
			return kth(arr1, arr2, arr1 + mid1, end2, k);
		else
			return kth(arr1, arr2, end1, arr2 + mid2, k);
	}
}

int main()
{
	int arr1[5] = {2, 3, 6, 7, 9};
	int arr2[4] = {1, 4, 8, 10};
    int n = 5;
    int m = 4;
    int k = 6;
	cout << kth(arr1, arr2, arr1 + n, arr2 + m, k - 1); //kth(a start, b start, a end, b end, index to  be searched for)
	return 0;
} 
