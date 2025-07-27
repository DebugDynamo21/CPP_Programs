//Optimized approach with T.C.- O(n).

#include <iostream>
using namespace std;

vector<int> pairSum(vector<int>arr, int target){
    vector<int> ans;
    int n = arr.size();

    if(n < 2){
        cout << "Array must contain at least two elements." << endl;
        return ans; // Return empty vector if not enough elements
    }

    int i = 0, j = n - 1;
    while(i < j){
        int sum = arr[i] + arr[j];
        if(sum == target){
            ans.push_back(arr[i]);
            ans.push_back(arr[j]);
            return ans; // Return the first pair found
        } else if(sum < target){
            i++; // Move to the right to increase the sum
        } else {
            j--; // Move to the left to decrease the sum
        }
    }
   
 return ans;  // Return empty vector if no pair found
}

int main(){
    int n;
    cout << "Enter the size of array: ";
    cin >> n;

    vector<int>arr(n);
    cout << "Enter the elements of the array (sorted): ";
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }

    int target;
    cout << "Enter target sum: ";
    cin >> target;

    vector<int> ans = pairSum(arr, target);
    cout << "Pair with sum " << target << " is: " << ans[0] << ", " << ans[1] << endl;     
    return 0; 
}