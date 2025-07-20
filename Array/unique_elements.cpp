// WAP to print all the unique values in an array.

#include <iostream>
using namespace std;

void uniqueElements(int arr[], int size){
    cout << "Unique elements are: ";

    for(int i = 0; i < size; i++){
        bool isUnique = true;
        for(int j = 0; j < size; j++){
            if(i != j && arr[i] == arr[j]){
                isUnique = false;
                break;
            }
        }

        if(isUnique)
            cout << arr[i] << " ";
    }
    cout << endl;
}


int main(){
    int n;
    cout << "Enter the size of array: ";
    cin >> n; //Input the size of array

    int arr[n];
    cout << "Enter elements in array: ";
    for(int i = 0; i < n; i++){
        cin >> arr[i]; //Input elements in array
    }

    uniqueElements(arr, n);
    return 0; 
}