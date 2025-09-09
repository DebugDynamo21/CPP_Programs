// find() is a linear search algorithm that searches for a specific 
// value within a range and returns an iterator to the first occurrence 
// of the value if found, or the end iterator if the value is not found.

// SYNTAX: find(start_iterator, end_iterator, value);

// Given a sorted vector of N integers, along with three other integers S, 
// L and U Check if S exists in the vector, if it exists, print YES, else NO.
// Find the lower bound of L and upper bound of U

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
    int n;
    cout << "Enter size of array: ";
    cin >> n;

    vector<int> v(n);
    cout << "Enter elements of array: ";
    for(int i = 0; i < n; i++){
        cin >> v[i];
    }

    int S, L, U;
    cout << "Enter S, L and U: ";
    cin >> S >> L >> U;

    // Check if S exists in the vector
    auto it = find(v.begin(), v.end(), S);
    if(it != v.end()){
        cout << "YES" << endl;
    }else{
        cout << "NO" << endl;
    }

    // Find the lower bound of L
    auto lower = lower_bound(v.begin(), v.end(), L);
    if(lower != v.end()){
        cout << "Lower bound of " << L << " is at index: " << (lower - v.begin()) << endl;
    }else{
        cout << L << " is greater than all elements in the array." << endl;
    }

    // Find the upper bound of U
    auto upper = upper_bound(v.begin(), v.end(), U);
    if(upper != v.end()){
        cout << "Upper bound of " << U << " is at index: " << (upper - v.begin()) << endl;
    }else{
        cout << U << " is greater than or equal to all elements in the array." << endl;
    }

    return 0;
}