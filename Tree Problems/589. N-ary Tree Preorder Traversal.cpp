/*
// Definition for a Node.
class Node {
public:
    int val;
    vector<Node*> children;

    Node() {}

    Node(int _val) {
        val = _val;
    }

    Node(int _val, vector<Node*> _children) {
        val = _val;
        children = _children;
    }
};
*/

class Solution {
public:
    void PreOrder(Node* root, vector<int>&ans){
        //Base Case if tree is empty 
        if(root == NULL) return;

        // Storing ans
        ans.push_back(root->val);

        // PreOrder in all of the children

        for(int i = 0; i< root->children.size(); i++){
            PreOrder(root->children[i], ans);
        }

        return;
    }
    vector<int> preorder(Node* root) {
        vector<int>ans;

        // Calling PreOrder function
        PreOrder(root, ans);
        return ans;
        
    }
};
