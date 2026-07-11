// Leetcode-90 Subsets-II

#include <iostream>
#include <vector>
using namespace std;

void getAllSubsets(vector<int>& nums, vector<int>& ans, int i, vector<vector<int>>& allSubsets){
    if(i == nums.size()){
        // store elements
        allSubsets.push_back({ans});
        return;
    }

    // include
    ans.push_back(nums[i]);
    getAllSubsets(nums, ans, i + 1, allSubsets);

    ans.pop_back(); // backtracking step.

    // skip all the duplicate values
    int idx = i+1;
    while(idx < nums.size() && nums[idx] == nums[idx - 1]){
        idx++;
    }
    // exclude
    getAllSubsets(nums, ans, idx, allSubsets);
}

vector<vector<int>> subsets(vector<int>& nums) {
    vector<vector<int>> allSubsets;
    vector<int> res;

    getAllSubsets(nums, res, 0, allSubsets);
        
    return allSubsets;
}

int main(){
    vector<int> nums = {1, 2, 2};
    
    vector<vector<int>> result = subsets(nums);

    for(auto subset: result){
        cout << "{ ";
        for(int x : subset){
            cout << x << " ";
        }
        cout << "}" << endl;
    }

    return 0;
}