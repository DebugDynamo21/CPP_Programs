// WAP to print bottom view of binary tree.

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

void bottomView(TreeNode* root){
    if(root == NULL){
        return;
    }

    // level order traversal with topview calculation
    queue<pair<TreeNode*, int>> q;
    map<int, int> m;

    q.push({root, 0});

    while(q.size() > 0){
        TreeNode* curr = q.front().first;   // node value
        int currHD = q.front().second;  //horizontal distance
        q.pop();

        // Update the map to store niche wale nodes .
        m[currHD] = curr->val;

        if(curr->left != NULL){
            q.push({curr->left, currHD - 1});
        }

        if(curr->right != NULL){
            q.push({curr->right, currHD + 1});
        }
    }

    for(auto& it: m){
        cout << it.second << " ";
    }
    cout << endl;
}

int main(){
    vector<int> preorder = {1, 2, -1, -1, 3, 4, -1, -1, 5, -1, -1};
    TreeNode* root = buildTree(preorder);

    bottomView(root);

    return 0;
}