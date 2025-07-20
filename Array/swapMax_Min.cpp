// WAP to swap the minimum and maximum number of an array.

#include <iostream>
using namespace std;

//Function to swap the max and min number in the array
void swap_Max_Min(int array[], int maxPos, int minPos){
    int temp = array[maxPos];
    array[maxPos] = array[minPos];
    array[minPos] = temp;
}

int main(){
    int n, minPos = 0, maxPos = 0;
    cout << "Enter size of array: ";
    cin >> n;   //Input the size of array

    int array[n];
    cout << "Enter the elements in array: ";
    for(int i = 0; i < n; i++){
        cin >> array[i];    //Input elements in array
    }

    int min = INT16_MAX;
    int max = INT16_MIN;

//Loop to find max and min value
    for(int i = 0; i < n; i++){
        if(array[i] > max){
            max = array[i];
            maxPos = i;
        }
        
        if(array[i] < min){
            min = array[i];
            minPos = i;
        }
    }

//Calling the swap function
    swap_Max_Min(array, maxPos, minPos);

//Ouput the array after swap
    cout <<  "Array after swap:\n ";
    for(int i = 0; i < n; i++){
        cout << array[i] << " ";
    }
    cout << endl;
    return 0; 
}