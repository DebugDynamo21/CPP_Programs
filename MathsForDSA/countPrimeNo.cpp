// count number of primes in range. This algo is sieve of eratothenes in which we eliminate 
// all the multiples of number from starting to end i last we are left with only prime numbers.

#include <iostream>
#include <vector>
using namespace std;

int countPrimes(int n){
    vector<bool> isPrime(n+1, true);
    int count = 0;

    for(int i = 2; i < n; i++){
        if(isPrime[i]){
            count++;
            
            for(int j = i * 2; j < n; j= j + i){
                isPrime[j] = false;
            }
        }
    }
    return count;
}

int main(){
    int n;
    cout << "Enter range till which count number of primes: ";
    cin >> n;

    cout << "Number of primes are: " << countPrimes(n) << endl;
    return 0; 
}