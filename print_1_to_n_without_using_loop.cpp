#include <iostream> 
using namespace std; 

int main() 
{ 
	int i = 0; 
	
begin: 
	i = i + 1; 
	cout << i << " "; 

	if (i < 100) 
	{ 
		goto begin; 
	} 
	return 0; 
} 

// This code is contributed by ShubhamCoder 
