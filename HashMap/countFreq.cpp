// Write a cpp program to find the frequency of elements in array using hashing.

#include <iostream>
#include <vector>
using namespace std;

int main(){
    int n;
    cout << "Enter size of array: ";
    cin >> n;

    vector<int> arr(n);
    cout << "Enter elements in array: ";
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }

    vector<int> hash(n, 0);
    for(int i = 0; i < n; i++){
        hash[arr[i]] += 1;
    }

    int q;
    cout << "Enter number of queries: ";
    cin >> q;

    cout << "Enter queries: ";
    while(q--){
        int num;
        cin >> num;

        cout << hash[num] << " ";
    }
    cout << endl;
    return 0;
}