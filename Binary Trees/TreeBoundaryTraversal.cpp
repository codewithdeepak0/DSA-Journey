// Question Link: https://www.geeksforgeeks.org/problems/boundary-traversal-of-binary-tree/1

/*
// Tree Node
class Node {
  public:
    int data;
    Node* left;
    Node* right;

    // Constructor to initialize a new node
    Node(int val) {
        data = val;
        left = NULL;
        right = NULL;
    }
};
*/

class Solution {
  public:
    void traverseLeft(Node* root, vector<int> &ans){
        //Base case
        if((root == NULL) || (root->left == NULL && root->right == NULL))
            return ;
        
        ans.push_back(root->data);
        if(root->left)
            traverseLeft(root->left, ans);
        else
            traverseLeft(root->right, ans);
    }
    
    void traverseLeaf(Node* root, vector<int> &ans){
        //Base case
        if(root == NULL)
            return ;
        
        if(root->left == NULL && root->right == NULL){
            ans.push_back(root->data);
            return ;
        }
        traverseLeaf(root->left, ans);
        traverseLeaf(root->right, ans);
    }
    
    void traverseRight(Node* root, vector<int> &ans){
        //Base case
        if((root == NULL) || (root->left == NULL && root->right == NULL))
            return ;
        
        if(root->right)
            traverseRight(root->right, ans);
        else
            traverseRight(root->left, ans);
        
        ans.push_back(root->data);
    }
    
    vector<int> boundaryTraversal(Node *root) {
        vector<int> ans;
        if(root == NULL)
            return ans;
        
        ans.push_back(root->data);
        
        traverseLeft(root->left, ans); //Traverse Left part and store
        //Traverse leaf nodes
        traverseLeaf(root->left, ans); //Left subtree
        traverseLeaf(root->right, ans); //Right subtree
        traverseRight(root->right, ans); //Traverse right part and store
        
        return ans;
    }
};