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
    for(int i = 0; i < b.size(); i++){
        bool found = false;
        for(int j = 0; j < a.size(); j++){
            if(b[i] == a[j]){
                found = true;
                a[j] = -1;
                break;
            }
        }
        if(!found){
            return false;
        }
    }
    return true;
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
    BRUTE FORCE APPROACH - O(m * n)
The very basic approach is to use two nested loops, the outer loop picks each 
element from b[], and the inner loop searches for this element in a[] and check 
for all elements in b[].
*/