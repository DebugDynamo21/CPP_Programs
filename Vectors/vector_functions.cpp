#include <iostream>
#include <vector>
using namespace std;

int main(){
    vector<int> v1 = {1, 2, 3};

    // 1. push_back()- adds an elements to the end of the array
    v1.push_back(4);
    cout << "After push_back(4): ";

    //2. pop.back() - removes the element from end of the array
    v1.pop_back();
    cout << "After pop_back(): ";

    //3. front() - returns the first element of the array
    cout << "First element: " << v1.front() << endl;

    //4. back() - returns the last element of the array
    cout << "Last element: " << v1.back() << endl;

    //5. size() - returns the number of elements in the array
    cout << "Size of vector: " << v1.size() << endl;

    //6. at() - returns the element at the specified index
    cout << "Element at index 1: " << v1.at(1) << endl; 
    return 0; 
}