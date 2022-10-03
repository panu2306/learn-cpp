/* The logic behind this new method to find/list out the prime number upto a specific number is to scratch the non-prime numbers till that number. This is done first assuming that all elements in the array are prime. After assuming all are primes, loop the divisor upto the square root of the number and for that divisor, find the multiples of that divisor upto that number and scratch it from list of primes since they are not prime.
*/

#include <bits/stdc++.h>

using namespace std; 

void printPrimes(int n){
	// declare a boolean array to assume all the numbers till n are prime - 
	bool prime[n+1];
	for(int i=2; i<n+1; i++){
		prime[i] = true;
	}

	// check the divisors and their multiples till n and eliminate them from array of primes - 
	for(int divisor=2; divisor*divisor<=n; divisor++){
		// if number is prime (assumed) then check for their multiples and eliminate them - 
		if(prime[divisor]){
			for(int i=divisor*divisor; i<=n; i=i+divisor){
				prime[i] = false;
			}
		}
	}

	for(int i=2; i<n; i++){
		if(prime[i]){
			cout << i << " ";
		}
	}
	cout << endl;
}

int main(){
	int n;
	cout << "Enter the element upto which you want to list primes: ";
	cin >> n; 
	printPrimes(n);
	return 0;
}
