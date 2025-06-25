/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     struct TreeNode *left;
 *     struct TreeNode *right;
 * };
 */
int findSecondMinimumValue(struct TreeNode* root);
void dfs(struct TreeNode* root, int firstMin, int *secondMin);


int findSecondMinimumValue(struct TreeNode* root) {
    if(root==NULL) return -1;
    int secondMin=-1;
    dfs(root, root->val, &secondMin);
    return secondMin;
}

void dfs(struct TreeNode* root, int firstMin, int *secondMin)
{
  if(root==NULL) return;
  if(root->val > firstMin && (*secondMin == -1 || root->val < *secondMin))
  {
    *secondMin=root->val;
  }
  dfs(root->left, firstMin, secondMin);
  dfs(root->right, firstMin, secondMin);
}
