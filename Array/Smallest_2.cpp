//To find the index of the smallest value in array.

#include <iostream>
using namespace std;
int main(){
    int n;
    int min = INT16_MAX;    //assign maximum value to min variable to compare with array values
    int pos = -1;         // position varible to store the index of min value
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
            pos = i;
        }
    }

    cout << "Smallest Value: " << min << endl;
    cout << "Index of smallest value: " << pos << endl;
    return 0; 
}