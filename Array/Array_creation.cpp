// ARRAY
// 1. Creation --> data_type array_name[size]

#include <iostream>
using namespace std;
int main(){

    //integer array
    int array[7] = {12,18,4,12,7,10,5};     // for 1D array size is optional
                                            // you may or may not mention the size
    //double array
    double arr[] = {11.2, 21.9, 14.8, 23.2};

//To print the array;

    cout << array[0] << " ";
    cout << array[1] << " ";
    cout << array[2] << " ";
    cout << array[3] << " ";
    cout << array[4] << " ";
    cout << array[5] << endl;
    return 0; 
}
