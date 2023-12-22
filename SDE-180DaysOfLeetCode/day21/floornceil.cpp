void floorCeilBSTHelper(Node* root, int key, int& floor, int& ceil) 
{ 
 
    while (root) { 
 
        if (root->data == key) { 
            ceil = root->data; 
            floor = root->data; 
            return; 
        } 
 
        if (key > root->data) { 
            floor = root->data; 
            root = root->right; 
        } 
        else { 
            ceil = root->data; 
            root = root->left; 
        } 
    } 
    return; 
} 
