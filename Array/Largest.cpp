// WAP to find the largest value in array.

#include <iostream>
using namespace std;
int main(){
    int n;
    int max = INT16_MIN;    //assign minimum value to min variable to compare with array values
    cout << "Enter the size of array: ";    //Input the size from the user
    cin >> n;

    int arr[n];
    cout << "Enter values in array: ";
    for(int i = 0; i < n; i++){
        cin >> arr[i];      //Input values in array
    }

    for(int i = 0; i < n; i++){     //Find largest value in array
        if(arr[i] > max){
            max = arr[i];
        }
    }

    cout << "Smallest Value: " << max << endl;
    return 0; 
}