//sieve of era
void sieve(int n){
	int a[n+1];
	a[0] = 0;
	a[1] = 0;
	for(int i=2;i<n+1;i++){
		a[i] = 1;
	}
	for(int i=2;i*i<=n;i++){   //i**2<=n == i<=sqrt(n)   number from 2-to-sqrt(n)
		a[i] = 0;
		for(j=2;j<n;j +=i){   //same as pointing to j*i   -->giving multiples of i
			a[j] = 0;
		}
	}
}


//GCD of number using Euclid's mathematics
int gcd(int a, int b){
	return b==0 ? a : gcd(b, a%b);
}

//clear i'th bit
mask = ~(1<<i); // 1<<i = 2**i  000010000, upon taking its not   111101111
num = num&&mask;   // only ith bit will turn to zero rest all will remain intact


//fizz-buzz   --> at every multiple of 3 print "fizz" and at that of 5 print "buzz"  and at every multiple of 15 print "fizzbuzz"
count_5 = 0;
count_3 = 0;
for(int i=1;i<100;i++)
{
	count_3++;  //as modulo operation is expensive
	count_5++;
	output = "";
	if(count_3==3){    //multiple of 3
		output +="fizz";
		count_3 = 0;
	}
	if(count_5==5){    //multiple of 5
		output +="buzz";
		count_5 = 0
	}
	if(output=="")
		cout<<i;
	else{
		cout<<output;    //if both multiple of 3 and that of 5 i.e of 15
		count_5 = 0;
		count_3 = 0;
	}
}

/*  
	a**b = {
				(a**2)**(b/2); if "b" is even
				a.(a**(b-1));  if "b" is odd
			}
*/
long  fast_power(int a, int b){
	long res = 1;
	while(b>0){
		if(b&1){    //"b" is odd
			res = (res%n * a%n)%n;  //res = res*a
		}
		a = a*a;      //  "b" is  even  
		b = b>>1;   //  b = b/2
	}
	return res;
}



//  MODULO ARITHEMATICS
/*
      (A+B)%N = (A%N + B%N) % N
      (A*B)%N = (A%N * B%N) % N

*/

//QUICK SORT --> https://youtu.be/7h1s2SojIRw
 // QUICK SORT ANALYSIS --> https://youtu.be/-qOVVRIZzao