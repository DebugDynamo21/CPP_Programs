// WAP to implement inorder traversal of binary tree.

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

void postorder(TreeNode* root){
    if(root == NULL){
        return;
    }

    postorder(root->left);
    postorder(root->right);
    cout << root->val << " ";
}

int main(){
    vector<int> nodes = {1, 2, -1, -1, 3, 4, -1, -1,  5, -1, -1};
    int idx = 0;
    TreeNode* root = buildTree(nodes, idx);
    
    postorder(root);
    cout << endl;
    return 0; 
}