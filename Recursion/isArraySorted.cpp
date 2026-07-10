// WAP to check whethere the given array is sorted. Return boolean value as answer.

#include <iostream>
using namespace std;

bool isArraySorted(vector<int>& nums, int n){

    if(n ==0 || n == 1){
        return true;
    }

    return nums[n-1] >= nums[n-2] && isArraySorted(nums, n-1);
}

int main(){
    vector<int> nums = {1, 2, 3, 4, 5};
    vector<int> num = {1, 3, 2, 6, 4};

    cout << "Is given array sorted (0 - false / 1 - true): " << isArraySorted(nums, 5) << endl;
    cout << "Is given array sorted (0 - false / 1 - true): " << isArraySorted(num, 5) << endl;
    return 0; 
}

// T.C. = total calls x work done in each call.
//      = n * O(1)
//      = O(n)