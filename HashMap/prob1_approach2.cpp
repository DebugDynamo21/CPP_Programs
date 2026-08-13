/*
Given two arrays a[] and b[] of size m and n respectively, the task is to determine 
whether b[] is a subset of a[]. Both arrays are not sorted, and elements are distinct.

Examples:
Input: a[] = [11, 1, 13, 21, 3, 7], b[] = [11, 3, 7, 1] 
Output: true

Input: a[]= [1, 2, 3, 4, 5, 6], b = [1, 2, 4] 
Output: true

Input: a[] = [10, 5, 2, 23, 19], b = [19, 5, 3] 
Output: false
*/


#include <iostream>
#include <unordered_map>
#include <vector>
using namespace std;

bool isSubset(vector<int>& a, vector<int>& b){
    int m = a.size(), n = b. size();

    // Sort both arrays
    sort(a.begin(), a.end());
    sort(b.begin(), b.end());

    int i = 0, j = 0;   // initialize two pointers

    while(i < m && j < n){
        if(a[i] < b[j]){    // move in a to catch up
            i++;
        }else if(a[i] == b[j]){ // matched one element from b
            i++, j++;   // move both
        }else{  // a[i] > b[j] → means b[j] is missing
            return false;
        }
    }

    // all b[] matched
    return (j == n);
}

int main(){
    int m, n;
    cout << "Enter size of a and b: ";
    cin >> m >> n;
    vector<int> a(m), b(n);

    cout << "Enter elements in a[]: ";
    for(int i = 0; i < m; i++){
        cin >> a[i];
    }

    cout << "Enter elements in b[]: ";
    for(int i = 0;i < n; i++){
        cin >> b[i];
    }

    cout << "Is b[] subset of a[]: " << isSubset(a, b);
    cout << endl;
    return 0; 
}

/*
    TWO POINTER APPROACH ; T.C. - O(mlogm + nlogn)
Sort both arrays and use two pointers to traverse them. If the current element of 
a[] is smaller, move the pointer in a. If the elements match, move both pointers. 
If the current element of a[] is greater than b[], then b[j] is missing in a[], so 
return false.
*/