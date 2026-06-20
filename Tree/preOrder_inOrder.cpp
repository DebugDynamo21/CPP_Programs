// Write a c++ program to construct a binary tree from given preorder and inorder traversal.

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

TreeNode* helper(vector<int> & preorder, vector<int>& inorder, int& preIdx, int left, int right){
    if(left > right){
        return NULL;
    }

    TreeNode* root = new TreeNode(preorder[preIdx]);
    int inIdx = search(inorder, left, right, preorder[preIdx]);
    preIdx++;

    root->left = helper(preorder, inorder, preIdx, left, inIdx -1);
    root->right = helper (preorder, inorder, preIdx, inIdx + 1, right);
    
    return root;
}


TreeNode* buildTree(vector<int>& preorder, vector<int>& inorder){
    int preIdx = 0;
    cout << "Preorder: ";
    for(int i : preorder){
        cout << i << " ";
    }
    cout << endl;
    cout << "Inorder: ";
    for(int i : inorder){
        cout << i << " ";
    }
    cout << endl;

    cout << "Binary Tree constructed successfully!" << endl;
    return helper(preorder, inorder, preIdx, 0, inorder.size() - 1);
}

void postOrder(TreeNode* root){
    if(root == NULL) return;

    postOrder(root->left);
    postOrder(root->right);
    cout << root->val << " ";
}

int main(){
    vector<int> preorder = {1, 2, 4, 5, 3};
    vector<int> inorder = {4, 2, 5, 1, 3};
    
    TreeNode* root = buildTree(preorder, inorder);

    cout << "\nPostorder Traversal: ";
    postOrder(root);
    cout << endl;

    return 0; 
}