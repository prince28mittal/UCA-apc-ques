/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     struct TreeNode *left;
 *     struct TreeNode *right;
 * };
 */
int FindElement(struct TreeNode* root, int val)
{
    if(root == NULL) return 0;
    
    if(root->val == val) return 1;
    
    return (FindElement(root->left, val) || FindElement(root->right, val));
}
struct TreeNode* leastAncester(struct TreeNode* node,int p,int q){
    struct TreeNode* l=NULL;
    struct TreeNode* r=NULL;
    if(node==NULL){
        return NULL;
    }
    if(node->val==p||node->val==q){
        return node;
    }
    l=leastAncester(node->left,p,q);
    r=leastAncester(node->right,p,q);
    if(l!=NULL && r!=NULL){
        return node;
    }
    return (l!=NULL ? l : r);
    
}
int lowestCommonAncestor(struct TreeNode* root,int p,int q) {
    struct TreeNode* lca=leastAncester(root,p,q);
    if(lca!=NULL){
        int Value=lca->val;
        if(lca->val==p){
            if(FindElement(lca,q)==0)
                Value=-1;
        }
        else{
        if(lca->val==q){
            if(FindElement(lca,p)==0)
                Value=-1;
        }
        }
        return Value;
    }
    return -1;
}