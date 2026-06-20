#include <iostream>
#include <vector>
using namespace std;

class TreeNode {
public:
    int val;
    TreeNode* left;
    TreeNode* right;

    TreeNode(int data){
        val = data;
        left = NULL;
        right = NULL;
    }
};

void inorder(TreeNode* root, vector<int>& arr){
    if(root == NULL){
        return;
    }

    inorder(root->left, arr);
    arr.push_back(root->val);
    inorder(root->right, arr);
}

TreeNode* insert(TreeNode* root, int val){
    if(root == NULL){
        return new TreeNode(val);
    }

    if(val < root->val){
        root->left = insert(root->left, val);
    }else{
        root->right = insert(root->right, val);
    }

    return root;
}

TreeNode* buildBST(vector<int>& arr){
    TreeNode* root = NULL;

    for(int val : arr){
        root = insert(root, val);
    }

    return root;
}

TreeNode* buildBSTFromSortedArray(vector<int>& arr, int st, int end){
    if(st > end){
        return NULL;
    }

    int mid = st + (end-st)/2;
    TreeNode* root = new TreeNode(arr[mid]);
    
    root->left = buildBSTFromSortedArray(arr, st, mid-1);
    root->right = buildBSTFromSortedArray(arr, mid+1, end);

    return root;
}

TreeNode* merge2BST(TreeNode* root1, TreeNode* root2){
    vector<int> arr1, arr2;

    inorder(root1, arr1);
    inorder(root2, arr2);

    vector<int> temp; // final bst inorder sequence i.e sorted

    int i = 0, j = 0;

    while(i < arr1.size() && j < arr2.size()){
        if(arr1[i] < arr2[j]){
            temp.push_back(arr1[i++]);
        }else{
            temp.push_back(arr2[j++]);
        }
    }

    while(i < arr1.size()){
        temp.push_back(arr1[i++]);
    }

    while(j< arr2.size()){
        temp.push_back(arr2[j++]);
    }

    return buildBSTFromSortedArray(temp, 0, temp.size()-1);  // (sorted arr, st, end)
}

int main(){
    vector<int> arr1 = {8, 2, 1, 10};
    vector<int> arr2 = {5, 3, 0};

    TreeNode* root1 = buildBST(arr1);
    TreeNode* root2 = buildBST(arr2);

    TreeNode* root = merge2BST(root1, root2);
    
    vector<int> seq;
    inorder(root, seq);
    cout << "Final BST: ";
    for(int v : seq){
        cout << v << " ";
    }

    cout << endl;
    return 0; 
}