// Given two vectors of integers, merge and print them if both are sorted, 
// else print the largest one in reverse order.


#include<iostream>
#include<vector>
#include<stdlib.h>

using namespace std;


int main() { 
  // write your code here
    int n, m;
    cout << "Enter size of first and second array: ";
    cin >> n >> m;
    
    vector<int> v1(n), v2(m);
    
    cout << "Enter elements of first array: ";
    for(int i = 0; i < n; i++){
        cin >> v1[i];
    }
    
    cout << "Enter elements of second array: ";
    for(int i = 0; i < m; i++){
        cin >> v2[i];
    }
    
    //Check if both arrays are sorted.
    if(is_sorted(v1.begin(), v1.end()) && is_sorted(v2.begin(), v2.end())){
        vector<int> v(n + m);
        
        // Merge two sorted arrays.
        merge(v1.begin(), v1.end(), v2.begin(), v2.end(), v.begin());
        for(int i = 0; i < v.size(); i++){
            cout << v[i] << " ";
        }
    }else{
        // If not sorted, print the larger array in reverse order.
        if(n > m){
            reverse(v1.begin(), v1.end());
            for(int i = 0; i < n; i++){
                cout << v1[i] << " ";
            }
        }else{
            reverse(v2.begin(), v2.end());
            for(int i = 0; i < m; i++){
                cout << v2[i];
            }
        }
    }
    
  return 0;
}
