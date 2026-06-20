// Write a c++ program to construct a binary tree from given post-order and in-order traversal.

#include <iostream>
#include <vector>
#include <queue>
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

int search(vector<int>& inorder, int left, int right, int target){
    for(int i = left; i <= right; i++){
        if(inorder[i] == target){
            return i;
        }
    }
    return -1;
}

TreeNode* helper(vector<int> & postorder, vector<int>& inorder, int& postIdx, int left, int right){
    if(left > right){
        return NULL;
    }

    TreeNode* root = new TreeNode(postorder[postIdx]);
    int inIdx = search(inorder, left, right, postorder[postIdx]);
    postIdx--;

    root->right = helper (postorder, inorder, postIdx, inIdx + 1, right);
    root->left = helper(postorder, inorder, postIdx, left, inIdx -1);
    
    return root;
}


TreeNode* buildTree(vector<int>& postorder, vector<int>& inorder){
    int postIdx = postorder.size()-1;
    cout << "Postorder: ";
    for(int i : postorder){
        cout << i << " ";
    }
    cout << endl;
    cout << "Inorder: ";
    for(int i : inorder){
        cout << i << " ";
    }
    cout << endl;

    cout << "Binary Tree constructed successfully!" << endl;
    return helper(postorder, inorder, postIdx, 0, inorder.size() - 1);
}

void preorder(TreeNode* root){
    if(root == NULL) return;

    cout << root->val << " ";
    preorder(root->left);
    preorder(root->right);
}

int main(){
    vector<int> postorder = {4, 5, 2, 3, 1};
    vector<int> inorder = {4, 2, 5, 1, 3};
    
    TreeNode* root = buildTree(postorder, inorder);

    cout << "\nPreorder Traversal: ";
    preorder(root);
    cout << endl;

    return 0; 
}