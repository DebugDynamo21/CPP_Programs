// WAP to print all the subsets of an array.

#include <iostream>
using namespace std;

void printSubsets(vector<int>& nums, vector<int>& ans, int i){
    if(i == nums.size()){   // base case
        for(int val : ans){
            cout << val << " ";
        }

        cout << endl;
        return;
    }

    // include
    ans.push_back(nums[i]);
    printSubsets(nums, ans, i+1);

    ans.pop_back(); // signifies the backtrack process in recursion
    
    // exclude
    printSubsets(nums, ans, i+1);

}

int main(){
    vector<int> nums = {1, 2, 3};
    vector<int> res;    // this will store the store subsets
    
    printSubsets(nums, res, 0);
    return 0;
}