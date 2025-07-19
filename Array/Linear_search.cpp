//LINEAR SEARCH - Refers to a serching algorithm with T.C. - O(n)

#include <iostream>
using namespace std;

int linearSearch(int arr[], int size, int target){
    for(int i = 0; i < size; i++){
        if(arr[i] == target){
            return i;       //TARGET FOUND
        }
    }

    return -1;  //TARGET NOT FOUND
}

int main(){
    int arr[] = {4, 2, 7, 8, 1, 3, 5};
    int size = 7;
    int target = 15;

    cout << "Index of target: " << linearSearch(arr, size, target) << endl;
    return 0;
}