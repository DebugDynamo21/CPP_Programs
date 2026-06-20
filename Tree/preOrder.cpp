// WAP to implement preorder traversal of binary tree.

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

TreeNode* buildTree(vector<int>& nodes, int& idx) {
    if (idx >= nodes.size() || nodes[idx] == -1) {
        idx++;
        return nullptr;
    }

    TreeNode* root = new TreeNode(nodes[idx++]);

    root->left = buildTree(nodes, idx);
    root->right = buildTree(nodes, idx);

    return root;
}

void preorder(TreeNode* root){
    if(root == NULL){
        return;
    }

    cout << root->val << " ";
    preorder(root->left);
    preorder(root->right);
}

int main(){
    vector<int> nodes = {1, 2, -1, -1, 3, 4, -1, -1,  5, -1, -1};
    int idx = 0;
    TreeNode* root = buildTree(nodes, idx);
    
    preorder(root);
    cout << endl;
    return 0; 
}