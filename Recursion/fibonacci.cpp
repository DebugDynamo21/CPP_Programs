#include <iostream>
using namespace std;

int nthFibonacci(int n){
    if(n == 0 || n == 1){
        return n;
    }

    return nthFibonacci(n-1) + nthFibonacci(n-2);
}

int main(){
    int n;
    cout << "Enter n to find nth fibonacci term: ";
    cin >> n;

    cout << "Nth fibonacci is: " << nthFibonacci(n) << endl;
    return 0; 
}