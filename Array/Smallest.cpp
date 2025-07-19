// WAP to find the smallest value in array.

#include <iostream>
using namespace std;
int main(){
    int n;
    int min = INT16_MAX;    //assign maximum value to min variable to compare with array values
    cout << "Enter the size of array: ";    //Input the size from the user
    cin >> n;

    int arr[n];
    cout << "Enter values in array: ";
    for(int i = 0; i < n; i++){
        cin >> arr[i];      //Input values in array
    }

    for(int i = 0; i < n; i++){     //Find smallest value in array
        if(arr[i] < min){
            min = arr[i];
        }
    }

    cout << "Smallest Value: " << min << endl;
    return 0; 
}