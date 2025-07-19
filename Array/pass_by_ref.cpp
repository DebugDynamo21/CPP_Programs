#include <iostream>
using namespace std;

void changeArr(int arr[], int size){    //passing reference of array and size
    cout << "In function\n";
    for(int i = 0; i < size; i++){
        arr[i] = 2 * arr[i];
    }
}

int main(){
    int arr[3] = {1, 2, 3};
    
    changeArr(arr, 3);  //Calling the changeArr function

    cout << "In Main\n";
    for(int i = 0; i < 3; i++){
        cout << arr[i] << " ";
    }
    cout << endl;
    return 0; 
}