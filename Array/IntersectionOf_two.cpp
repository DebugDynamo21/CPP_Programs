// WAP to print intersection of 2 arrays

#include <iostream>
using namespace std;

// Function to find intersection of two arrays
void findIntersection(int arr1[], int arr2[], int size1, int size2) {
    cout << "Intersection of the two arrays: ";
    for (int i = 0; i < size1; i++) {
        for (int j = 0; j < size2; j++) {
            if (arr1[i] == arr2[j]) {
                cout << arr1[i] << " ";
                break; // To avoid printing duplicates from arr1
            }
        }
    }
    cout << endl;
}

int main(){
    int arr1[] = {1, 2, 3, 4, 5};
    int arr2[] = {4, 5, 6, 7, 8};

    int size1 = sizeof(arr1) / sizeof(arr1[0]);
    int size2 = sizeof(arr2) / sizeof(arr2[0]);

    // Function call to find intersection
    findIntersection(arr1, arr2, size1, size2);
    // Output: Intersection: 4 5
    return 0; 
}