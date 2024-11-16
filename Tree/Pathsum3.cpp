/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:

void slove(TreeNode* root,int k ,int &count,vector<int> path){
    if(root==nullptr){
        return;
    }
    path.push_back(root->val);
    // left
    slove(root->left,k,count,path);
    // right
    slove(root->right,k,count,path);
    // check foor k sum
    int size= path.size();
    long long sum = 0;
    for(int i=size-1;i>=0;i--){
       sum+=path[i];
       if(sum==k){
        count++;
       }
    }
    path.pop_back();
}
    int pathSum(TreeNode* root, int targetSum) {
       vector<int> path;
       int count=0;

       slove(root,targetSum,count,path);
       return count; 
    }
};