#include<iostream>
#include<vector>
#include<queue>
using namespace std;
class Node{
    public:
    int data;
    Node*left;
    Node*right;
    Node(int data){
        this->data=data;
        this->left=nullptr;
        this->right =nullptr;
    }
};

//preorder
void preorder(Node* root){
    //NLR
    if(root==nullptr){
        return;
    }
    cout<<root->data<< " ";
    preorder(root->left);
    preorder(root->right); 
}

//inorder 
void inorder(Node* root){
    //LNR
if(root==nullptr){
    return;
}
inorder(root->left);
cout<<root->data<<" ";
inorder(root->right);
}

//postorder
void postorder(Node* root){
    //LRN
    if(root==nullptr){
        return;
    }
    postorder(root->left);
    postorder(root->right);
    cout<<root->data<<" ";


}
// 10 20 5 11 17 2 4 8 6 25 15 

// level order traversal 
void leveloderTraversal(Node *root)
{
    queue<Node *> q;
    q.push(root);
    q.push(nullptr);

    while (!q.empty())
    {
        Node *temp = q.front();
        q.pop();

        if (temp == nullptr)
        { // purana level complete ho gaya hai
            cout << endl;
            if (!q.empty())
            { // queue mein aur child Node hai
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




Node*insertintobst(Node*& root,int data){
if(root==nullptr){
    // first Node 
    root = new Node(data);
    return root;
}
// no first Node 
if(root->data > data){
    root->left = insertintobst(root->left,data);
}
else{
     root->right = insertintobst(root->right,data); 
}
return root;

}

void takeinput(Node* &root){
int data;
cin>>data;
while(data!=-1){
    root = insertintobst(root,data);
    cin>>data;
}
}


int  minval(Node* root){
    if(root==nullptr){
        return -1;
    }
   Node* temp = root;
    while(temp->left!=nullptr){
        temp = temp->left;
    }
    return temp->data;
}

int  maxvalue(Node* root){
    if(root==nullptr){
        return -1;
    }
   Node* temp = root;
    while(temp->right!=nullptr){
        temp = temp->right;
    }
    return temp->data;
}

int main(){
Node* root = nullptr;
cout<<"Enter data for root Node"<<endl;
takeinput(root);
cout<<"printing the tree level order traversal "<<endl;
inorder(root);
cout<<endl<<"Minimum value is : ";
cout<<minval(root);
cout<<endl<<"Maximum value is : ";
cout<<maxvalue(root);
}

