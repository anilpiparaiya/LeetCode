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
    void PostOrder(Node* root, vector<int>&ans){
        //Base Case if tree is empty
        if(root==NULL) return;

        // PostOrder in all of the children
        for(int i = 0; i < root->children.size(); i++){
            PostOrder(root->children[i], ans);
        }

        // Storing ans
        ans.push_back(root->val);
        return;
    }

    vector<int> postorder(Node* root) {
        vector<int>ans;
        PostOrder(root, ans);
        return ans; 
    }
};
