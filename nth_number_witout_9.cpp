// CPP code to find nth number
// with digits 0, 1, 2, 3, 4, 5

#include <iostream>
using namespace std;

int ans(int n){
// If the Number is less than 8 return the number as it is.
if(n < 9){
	return n;
}
//Call the function again and again the get the desired result. And convert the number to base 8.
return n%9 + 10*(ans(n/9));
}

int getSpecialNumber(int N)
{
//Decrease the Number by 1 and Call ans function to convert N to base 8
return ans(--N);
}

/*Example:-
Input: N = 17
Output: 24

Explaination:-
decrease 17 by 1
N = 16
call ans() on 16

ans():
	16%6 + 10*(ans(16/6))
		since 16/6 = 2 it is less than 6 the ans returns value as it is.
	4 + 10*(2)
	= 24

hence answer is 24.*/

int main() 
{
int N = 9;
int answer = getSpecialNumber(N+1);
cout<<answer<<endl;
return 0;
} 
// This Code is contributed by Regis Caelum

