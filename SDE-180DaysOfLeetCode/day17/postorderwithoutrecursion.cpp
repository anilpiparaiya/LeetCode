vector <int> postOrder (Node *head)
{ 
    vector<int>vec;
    struct Node* temp = head;
   unordered_set<Node*> visited;
   while (temp && visited.find(temp) == visited.end()) {
      if (temp->left &&
         visited.find(temp->left) == visited.end())
         temp = temp->left;
      else if (temp->right &&
         visited.find(temp->right) == visited.end())
         temp = temp->right;
      else {
         vec.push_back(temp->data);
         visited.insert(temp);
         temp = head;
      }
   }
    return vec;
}
