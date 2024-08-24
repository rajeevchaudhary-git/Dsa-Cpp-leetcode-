#include<iostream>
#include<vector>

using namespace std;

class Node{
    public:
    int data;
    Node* next;
    Node* prev;

    Node(){
        this->data = 0;
        this->next=NULL;
        this->prev = NULL;
    }
    Node(int data){
        this->data = data;
        this->prev=NULL;
        this->next=NULL;
    }
    ~Node(){}

};


void print(Node* head){
   Node* temp =head;
   while(temp!=NULL){
    cout<<temp->data<<" ";
    temp = temp->next;
   }
}

int getLen(Node*head){
    Node* temp = head;
    int len = 0;
    while(temp!=NULL){
        temp=temp->next;
        len++;
    }
    return len;
}

void insertAtst(Node* &head,Node* &tail,int data){
    if(head ==NULL){
        Node* newnode =  new Node(data);
        head = newnode;
        tail = newnode;
        return;
    }
    Node* newnode = new Node(data);
    newnode->next = head;
    head->prev = newnode;
    head = newnode;
}


void InsertAtTail(Node* &head,Node* &tail,int data){
    if(tail==NULL){
        Node* newnode = new Node(data);
        head = newnode;
        tail = newnode;
        return;
    }
    Node* newNode = new Node(data);
    tail->next = newNode;
    newNode->prev = tail;
    tail = newNode;

}


void InsertAtPostion(Node* &head,Node* &tail,int pos,int data){
    if(head==NULL){
        Node* newnode = new Node(data);
        head = newnode;
        tail = newnode;
        return;
    }

    if(pos==0){
        insertAtst(head,tail,data);
        return;
    }
    int len = getLen(head);
    if(pos>=len){
        InsertAtTail(head,tail,data);
        return;
    }

    int i=0;
    Node* prevNode = head;
    while(i < pos-1){
       
        prevNode = prevNode->next;
        i++;
    }

    Node *curr = prevNode->next;

    Node * newnode = new Node(data);
     
     prevNode->next=newnode;
     newnode->prev = prevNode;

     curr->prev = newnode;
     newnode->next = curr;


}

void deleteAtpostion(Node* &head,Node* tail,int pos){
    if(head==NULL){
        cout<<"Linked list is empty";
        return;
    }
    if(head->next==NULL){
        // single node
        Node* temp = head;
        head = NULL;
        tail = NULL;
        delete temp;
        return;
    }
    int len = getLen(head);
    if(pos==len){
        Node* temp =  tail;
        tail  = tail->prev;
        temp->prev = NULL;
        tail->next = NULL;
        delete temp;
        return;

    }
    if(pos>len){
        cout<<endl;
        cout<<"Enter a valid Postion";
        return;
    }
    if(pos==1){
        Node* temp = head;
        head = head->next;
        head->prev = NULL;
        temp->next = NULL;
        delete temp;
        return;
    }
    int i = 1;
    Node* left = head;
    while(i<pos-1){
        left = left->next;
        i++;
    }
    Node* curr = left->next;
    Node* right = curr->next;

    left->next=right;

    right->prev=left;
    curr->next = NULL;
    curr->prev=NULL;
    delete curr;
}



void getMidleEl(Node* &head,int length){
int mid = length/2;
int i = 0;
Node *temp =head;
while(i<mid){
temp = temp->next;
i++;
}
cout<<temp->data;
}

Node* getMiddleBySingle(Node * &head){
if(head==NULL){
    cout<<"linked list is empty"<<endl;
    return head;
}
if(head->next==NULL){
    return head;
}

Node* slow = head;
Node* fast = head;

while(slow!=NULL && fast!=NULL){
 fast = fast->next;
 if(fast!=NULL){
    fast=fast->next;
    slow = slow->next;
 }
}
return slow;
}


void reverseLl(Node* &head,Node *tail){
    Node * start = head;
    Node * end = tail;
      while(end!=NULL){
        end = end->prev;
        cout<<end->data<<" ";
      }
        
    }


Node* ReverseLL(Node* head){
    Node* prev = NULL;
    Node* curr = head;
    
    while(curr!=NULL){
       Node* forward = curr->next;
       curr->next = prev;
       prev = curr;
       curr = forward;
    }
    return prev;
}  




int main(){
    Node * haed =NULL;
    Node * Tail =NULL;

    

    insertAtst(haed,Tail,6);
    insertAtst(haed,Tail,5);
    insertAtst(haed,Tail,4);
    insertAtst(haed,Tail,3);
    insertAtst(haed,Tail,2);
    insertAtst(haed,Tail,1);

    InsertAtTail(haed,Tail,10011);


  int len = getLen(haed);
    InsertAtPostion(haed,Tail,0,12);
    // print(haed);
   
    // deleteAtpostion(haed,Tail,12);
    // reverseLl(haed,Tail);
    print(haed);
    cout<<endl;

    cout<<getMiddleBySingle(haed)->data;
   haed=  ReverseLL(haed);
    cout<<endl;
    print(haed);




}