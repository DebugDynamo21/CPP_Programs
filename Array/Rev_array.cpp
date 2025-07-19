//WAP to reverse the elements of array.
//(Using two pointer approach) - T.C.- O(n)

#include <iostream>
using namespace std;

void reverseArray(int arr[], int size){
    int start = 0, end = size - 1;
    while(start < end){     //two pointer approach
        swap(arr[start], arr[end]);
        start++, end--;
    }
}

int main(){
    int n;
    cout << "Enter the size of array: ";
    cin >> n;

    int arr[n];
    cout << "Enter values in array: ";
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }

    reverseArray(arr, n);

    cout << "Reversed array: ";
    for(int i = 0; i < n; i++){
        cout << arr[i] << " ";
    }
    cout << endl;
    return 0; 
}