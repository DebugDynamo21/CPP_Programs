#include <iostream>
using namespace std;

int sumOfNnums(int n){
    if (n == 1){
        return 1;
    }

    return n + sumOfNnums(n-1);
}

int main(){
    int n;
    cout << "Enter n to find sum: ";
    cin >> n;

    cout << sumOfNnums(n);
    cout << endl;
    return 0; 
}