// WAP to transform a tree into sum tree.
/*      1             15
       / \           /  \
      2   3   =>    2   12
         / \            / \                
        4   5          4   5
*/

#include <iostream>
#include<vector>
using namespace std;

class TreeNode{
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

int sumTree(TreeNode* root){    // T.C. : O(n)
    if(root == NULL){
        return 0;
    }

    int leftSum = sumTree(root->left);
    int rightSum = sumTree(root->right);

    root->val += leftSum + rightSum;
    
    return root->val;
}

void preOrder(TreeNode* root){
    if(root == NULL){
        return;
    }

    cout << root->val << " ";
    preOrder(root->left);
    preOrder(root->right);
}

int main(){
    vector<int> preorder = {1, 2, -1, -1, 3, 4, -1, -1, 5, -1, -1};
    TreeNode* root = buildTree(preorder);

    cout << "Before conversion: ";
    preOrder(root);
    cout << endl;

    sumTree(root);

    cout <<"After conversion: ";
    preOrder(root);
    cout << endl;

    return 0;
}
