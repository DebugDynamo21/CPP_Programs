// WAP to find kth level nodes in a binary tree.

#include<iostream>
#include<vector>
#include<queue>
#include<map>
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

static int idx = -1;
TreeNode* buildTree(vector<int>& preorder){
    idx++;
    if(preorder[idx] == -1){
        return NULL;
    }
    TreeNode* root = new TreeNode(preorder[idx]);
    root->left = buildTree(preorder);
    root->right = buildTree(preorder);

    return root;
}

void kthLevel(TreeNode* root, int k){
    if(root == NULL){   // base case
        return;
    }
    if(k == 1){ // 
        cout << root->val << " ";
        return;
    }
    kthLevel(root->left, k-1);
    kthLevel(root->right, k-1);

}

int main(){
    vector<int> preorder = {1, 2, -1, -1, 3, 4, -1, -1, 5, -1, -1};
    int k;
    cout << "Enter value of kth level: ";
    cin >> k;

    TreeNode* root = buildTree(preorder);

    kthLevel(root, k);
    cout << endl;
    return 0;
}