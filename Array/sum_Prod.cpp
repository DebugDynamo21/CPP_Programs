// WAP to calculate sum and product of all elements in an array.

#include <iostream>
using namespace std;

int sumOfarr(int arr[], int size){
    int sum = 0;
    for(int i = 0; i < size; i++){
        sum += arr[i];
    }
    return sum;
}

int prodOfarr(int arr[], int size){
    int prod = 1;
    for(int i = 0; i < size; i++){
        prod *= arr[i];
    }
    return prod;
}

int main(){
    int n;
    cout << "Enter size of array: ";
    cin >> n;

    int array[n];
    cout << "Enter elements in array: ";
    for(int i = 0; i < n; i++){
        cin >> array[i];
    }

    cout << "Sum of all elements of array: " << sumOfarr(array, n) << endl;
    cout << "\nProduct of all elements of array: " << prodOfarr(array, n) << endl;
    return 0; 
}