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

    int sum=0;

    int rangeSumBST(TreeNode* root, int low, int high) {
        cin.tie(0)->ios::sync_with_stdio(0);
        cout.tie(0);
        //dfs/bfs and if val in range then sum+=val
        if(root==NULL) return 0;
        if(root->val<=high && root->val>=low){
            sum+=root->val;
            cout<<sum<<endl;
        }
        rangeSumBST(root->left,low,high);
        rangeSumBST(root->right,low,high);
        
        return sum;
    }
};