// WAP to implement level order traversal of binary tree.

#include <iostream>
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

void levelOrder(TreeNode* root){
    if(root == NULL){
        return;
    }

    queue<TreeNode*> q;
    q.push(root);

    while(q.size() > 0){
        TreeNode* curr = q.front();
        q.pop();

        cout << curr->val << " ";

        if(curr->left){
            q.push(curr->left);
        }
        if(curr->right){
            q.push(curr->right);
        }
    }
}

int main(){
    vector<int> preorder = {1, 2, -1, -1, 3, 4, -1, -1, 5, -1, -1};
    TreeNode* root = buildTree(preorder);
    
    levelOrder(root);
    cout << endl;
    return 0; 
}