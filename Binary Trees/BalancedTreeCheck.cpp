// Question Link: https://www.geeksforgeeks.org/problems/check-for-balanced-tree/1

/*

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
    pair<int,int>isBalancedFast(Node* root){
        if(root == NULL){
            pair<int,int> p = make_pair(true, 0);
            return p;
        }
        
        pair<int,int> left = isBalancedFast(root->left);
        pair<int,int> right = isBalancedFast(root->right);
        
        bool leftAns = left.first;
        bool rightAns = right.first;
        bool diff = abs(left.second - right.second) <= 1;
        
        pair<int,int> ans;
        ans.second = max(left.second, right.second) + 1;
        
        if(leftAns && rightAns && diff){
            ans.first = true;
        }else{
            ans.first = false;
        }
        return ans;
    }
    bool isBalanced(Node* root) {
        return isBalancedFast(root).first;
    }
};