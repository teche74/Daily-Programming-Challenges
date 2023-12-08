class Solution {
public:
    void Preorder(TreeNode * root, string & ans){
        if(root == nullptr) return;
            ans+=to_string(root->val);

            if(root -> left != nullptr || root->right !=nullptr){
                ans.push_back('(');
                Preorder(root->left,ans);
                ans.push_back(')');
            }

            if(root -> right != nullptr){
                ans.push_back('(');
                Preorder(root->right,ans);
                ans.push_back(')');
            }
    }
    
    string tree2str(TreeNode* root) {
        if(root == nullptr) return "";
        string ans  = "";

        Preorder(root, ans);
        return ans;
    }
};
