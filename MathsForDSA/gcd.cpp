// find gcd of 2 number using euclid's algorithm.

#include <iostream>
using namespace std;

int gcd(int a, int b){
    while(a > 0 && b > 0){
        if(a > b){
            a = a % b;
        }else{
            b = b % a;
        }
    }

    if(a == 0) return b;
    return a;
}

int main(){
    int a, b;
    cout << "Enter first number: ";
    cin >> a;
    
    cout << "Enter second number: ";
    cin >> b;

    cout << "GCD of " << a << " & " << b << ": " << gcd(a,b) << endl;
    return 0; 
}