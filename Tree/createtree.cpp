#include <iostream>
#include <vector>
#include<stack>
#include <queue>

using namespace std;

class node
{
public:
    int data;
    node *left, *right;
    node(int d)
    {
        this->data = d;
        this->left = nullptr;
        this->right = nullptr;
    }
};

node *bluidtree(node *root)
{
    cout << "Enter the data for node:" << endl;
    int data;
    cin >> data;
    root = new node(data);
    if (data == -1)
    {
        return nullptr;
    }
    cout << "Enter data for the left of " << data << endl;
    root->left = bluidtree(root->left);
    cout << "Enter the data for rigth of " << data << endl;
    root->right = bluidtree(root->right);
    return root;
}

void leveloderTraversal(node *root)
{
    queue<node *> q;
    q.push(root);
    q.push(nullptr);

    while (!q.empty())
    {
        node *temp = q.front();
        q.pop();

        if (temp == nullptr)
        { // purana level complete ho gaya hai
            cout << endl;
            if (!q.empty())
            { // queue mein aur child node hai
                q.push(nullptr);
            }
        }
        else
        {
        cout << temp->data << " ";
            if (temp->left)
            {
                q.push(temp->left);
            }
            if (temp->right)
            {
                q.push(temp->right);
            }
        }
    }
}

void inorder(node* root){
    if(root==nullptr){
        return;
    }
    inorder(root->left);
    cout<<root->data<<" ";
    inorder(root->right);
}

void preorder(node * root){
      if(root==nullptr){
        return;
    }
    cout<<root->data<<" ";
    preorder(root->left);
    preorder(root->right); 
}

void postorder(node* root){
     if(root==nullptr){
        return;
    }
    postorder(root->left);
    postorder(root->right);  
    cout<<root->data<<" ";
}

void bulidTreeFromLevelOrder(node* &root){
queue<node*> q;
cout<<"enter the data for the root: "<<endl;
int data;
cin>>data;
root = new node(data);
q.push(root);

while(!q.empty()){
    node* temp = q.front();
    q.pop();

    cout<<"enter left data for "<<temp->data<<endl;
    int leftdata;
    cin>>leftdata;

    if(leftdata!=-1){
        temp->left = new node(leftdata);
        q.push(temp->left);
    }

    cout<<"enter right data for "<<temp->data<<endl;
    int rightdata;
    cin>>rightdata;

    if(rightdata!=-1){
        temp->right = new node(rightdata);
        q.push(temp->right);
    }
}
}

void inorderIt(node* root) {
    if (root == nullptr) {
        return;
    }

    stack<node*> st;  // Stack to simulate recursion
    node* curr = root;

    while (curr != nullptr || !st.empty()) {
        // Step 1: Go to the leftmost node
        while (curr != nullptr) {
            st.push(curr);      // Push current node to stack
            curr = curr->left;  // Move to the left child
        }

        // Step 2: Process the node at the top of the stack
        curr = st.top();
        st.pop();
        cout << curr->data << " ";  // Print the node's data

        // Step 3: Now move to the right subtree
        curr = curr->right;
    }
}


void PreorderTraversal(node* &root){
    if(root==nullptr){
        return;
    }
    stack<node*> st;
    node*curr = root;

    while(curr!=nullptr || !st.empty()){
        curr = st.top();
        st.pop();
        cout<<curr->data<<" ";
        curr = curr->left;
        while(curr!=nullptr){
            st.push(curr);
            curr = curr->left;
        }

    }
}


int main()
{
    node *root = nullptr;
//    1 3 7 -1 -1 11 -1 -1 5 17 -1 -1 -1
//  1 2 3 6 -1 -1 5 -1 -1 4 -1 -1 -1

// 1 3 5 7 11 17 -1 -1 -1 -1 -1 -1 -1
// bulidTreeFromLevelOrder(root);
// inorderIt(root);
// inorder(root);
    root = bluidtree(root);
PreorderTraversal(root);

    // printing tree by level order traversal
    // leveloderTraversal(root);

    // preorder(root);
    // postorder(root);
    // inorder(root);
    
}