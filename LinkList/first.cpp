#include <iostream>
#include <vector>
using namespace std;

class Node
{
public:
  int data;
  Node *next;
  Node *prev;
  Node()
  {
    this->data = 0;
    this->next = NULL;
    this->prev = NULL;
  }
  Node(int data)
  {
    this->data = data;
    this->next = NULL;
    this->prev = NULL;
  }

  ~Node(){
  cout<<"deleted";
  }
};

void print(Node *&head)
{
  Node *temp = head;
  while (temp != nullptr)
  {
    cout << temp->data << " ";
    temp = temp->next;
  }
}

// find length function
int findlen(Node *head)
{
  int len = 0;
  Node *temp = head;
  while (temp != NULL)
  {
    temp = temp->next;
    len++;
  }
  return len;
}

// insert at starting

void insertNode(Node *&head, Node *&tail, int data)
{
  if (tail == NULL)
  {
    Node *newNode = new Node(data);
    tail = newNode;
    head = newNode;
  }
  else
  {
    // step 1  naya node banana padega
    Node *newNode = new Node(data);
    // step 2  naya node a next ko head pe point karwana h
    newNode->next = head;
    // step 3  aur head point karat h start ko toh head ko new node k equal karna hoga
    head = newNode;
  }
}

// insert at end
void InsertAtTail(Node *&head, Node *&tail, int data)
{
  if (tail == NULL)
  {
    Node *newNode = new Node(data);
    tail = newNode;
    head = newNode;
  }
  else
  {
    Node *newNode = new Node(data);
    // if tail->next is null
    tail->next = newNode;
    tail = newNode;
  }
}

// insert at index

void InsertAtPostion(int position, int data, Node *&head, Node *&tail)
{
   int len = findlen(head);

  if(position>len || position < 0){
    cout<<"invalid Postion"<<endl;
    return;
  }

  if (head == NULL)
  {
    Node *newNode = new Node(data);
    tail = newNode;
    head = newNode;
  }

  if (position == 0)
  {
    insertNode(head, tail, data);
    return;
  }

 
  
  if (position == len)
  {
    InsertAtTail(head, tail, data);
    return;
  }
  int i = 1;
  Node *prev = head;
  while (i < position)
  {
    prev = prev->next;
    i++;
  }
  Node *curr = prev->next;

  // step

  Node *newnode = new Node(data);

  // step 2
  newnode->next = curr;

  // step 3

  prev->next = newnode;
}





// delete node 
void deleteNode(int position, Node* &head, Node* &tail) {
    if (head == NULL) {
        return;
    } 

    if (position == 0){
        Node* temp = head;
        head = head->next;
        temp->next = NULL;
        delete temp;
        return;
    }

    int len = findlen(head);
    if (position >= len) {
        cout << "Invalid Position" << endl;
        return;
    }

    int i = 0;
    Node* prev = head;
    while (i < position - 1) {
        prev = prev->next;
        i++;
    }

    Node* curr = prev->next;
    prev->next = curr->next;
    if (curr == tail) {
        tail = prev;
    }
    curr->next = NULL;
    delete curr;
}


// check for loop
bool checkForLoop(Node* &head){
  if(head==NULL){
    cout<<"linked list is empty";
   return false;
  }
  Node*slow = head;
  Node*fast = head;
  while(fast!=NULL){
    fast=fast->next;
    if(fast!=NULL){
      fast=fast->next;
      slow = slow->next;
    }
    if(slow==fast){
      return true;
    }
  }
  return false;
}


Node* startingPoint(Node * head){
  Node*slow = head;
  Node*fast = head;
  while(fast!=NULL){
    fast=fast->next;
    if(fast!=NULL){
      fast=fast->next;
      slow = slow->next;
    }
    if(slow==fast){
      slow=head;
      break;
    }
  }
  if(fast==NULL){
    return NULL;
  }
  while(slow!=fast){
    slow =slow->next;
    fast=fast->next;
  }
  return fast;
  
}
// it is not running when loop starts from head 
void removeLoop(Node* &head){
    Node*slow = head;
    Node*fast = head;
    while(fast!=NULL){
    fast=fast->next;
    if(fast!=NULL){
      fast=fast->next;
      slow = slow->next;
    }
    if(slow==fast){
      slow=head;
      break;
    }
  }
 if(fast!=NULL){
  Node* prev=fast;
  while(slow!=fast){
    prev=fast;
    slow =slow->next;
    fast=fast->next;
  }
  prev->next=NULL;
    }
}


Node* Reverseloop(Node* &head){
  Node* prev = NULL;
  Node * curr = head;
  while(curr!=NULL){
  Node* temp = curr->next;
  curr->next = prev;
  prev = curr;
  curr = temp;
  }
  return prev;


}

Node* reverseRecursion(Node* prev, Node* curr){
  if(curr==NULL){
   return prev;
  }

  Node * forward = curr->next;
  curr->next = prev;
  prev=curr;
  curr = forward;
   reverseRecursion(prev,curr);
}


bool isPalindrome(Node* &head){
  Node* slow = head;
  Node* fast = slow->next;

// getting middle in slow pointer 
  while(fast!=NULL){
    fast =fast->next;
    if(fast!=NULL){
      fast = fast->next;
      slow = slow->next;
    }
  }

// reversing the linked list from middle node to end node
  Node* newhead = slow;
  Node * prev = NULL;
  Node * curr = newhead->next;

  while(curr!=nullptr){
    Node* forward = curr->next;
    curr->next = prev;
    prev = curr;
    curr = forward;
  }

  //checking for palindrome
  Node * temp  = head;
  Node * middle = prev;
  while(middle!=NULL){
    if(temp->data!=middle->data){
      return false;
    }
    else{
      temp = temp->next;
      middle=middle->next;
    }
  }
  return true;
  // print(prev);
  
}

Node * Getmiddle(Node* &head){
  Node* slow =  head;
  Node * fast = head;
  while(fast!=nullptr){
    fast = fast->next;
    if(fast!=nullptr){
    fast = fast->next;
    slow= slow->next;
    }
  }
  return slow;
}


void remove_duplicate(Node* &head){
  Node *curr = head;
  Node * first = head;
  while(curr!=nullptr){
    if((curr->next!=nullptr) && curr->data==curr->next->data){
      Node* temp1 = first->next;
      Node *temp2 = curr->next;
      first->next = curr->next->next;
      temp1->next =nullptr;
      temp2->next = nullptr;
      delete temp1;
      delete temp2;
    }
    else{
   curr = curr->next;
   first = first->next;
    }
  }
}


void sortcolors(Node* &head){
int zero = 0;
int one = 0;
int two = 0;
Node* temp = head;
while(temp!=nullptr){
   if(temp->data==0){
    zero++;
    temp= temp->next;

   }
   else if(temp->data==1){
    one++;
    temp= temp->next;

   }
   else{
    two++;
    temp= temp->next;
   }
}

temp = head;
while(zero--){
  temp->data = 0;
  temp= temp->next;
}
while(one--){
  temp->data = 1;
  temp= temp->next;
}
while(two--){
  temp->data = 2;
  temp= temp->next;
}
}

Node* sortcolors2(Node* &head){
  //create dummy node
  Node* zeroHead = new Node(-1);
  Node* Zerotail = zeroHead;

  Node* onehead = new Node(-1);
  Node* Onetail = onehead;

  Node* twoHead = new Node(-1);
  Node* TwoTail = twoHead;

  Node* curr = head;
  while(curr!=nullptr){
    if(curr->data==0){
      Node* temp = curr;
      curr = curr->next;
      temp->next=nullptr;

      //append into zero link list
      Zerotail->next = temp;
      Zerotail = temp;

    }
    else if(curr->data==1){
      Node* temp = curr;
      curr = curr->next;
      temp->next=nullptr;

      //append into zero link list
      Onetail->next = temp;
      Onetail = temp;

    }
    else if(curr->data==2){
      Node* temp = curr;
      curr = curr->next;
      temp->next=nullptr;

      //append into zero link list
      TwoTail->next = temp;
      TwoTail = temp;

    }
  }

  // remove dummy nodes 
  Node* temp1 = onehead;
  onehead= onehead->next;
  temp1->next =nullptr;
  delete temp1;

  Node* temp2 = twoHead;
  twoHead= twoHead->next;
  temp2->next =nullptr;
  delete temp2;


  // join them 
  if(onehead!=nullptr){
    // one wale list empty nhi mtlb isko zero k tail mein jod do 
    Zerotail->next = onehead; 
    if(twoHead!=nullptr){
      Onetail->next=twoHead;
    }
  }
  else{
    if(twoHead!=nullptr){
      Zerotail->next = twoHead;
    }
  }

  // remove zero dummy node 
   Node* temp = zeroHead;
   zeroHead= zeroHead->next;
   temp->next =nullptr;
   delete temp;
   return zeroHead;


}
Node* kthNodeFormEnd(Node* &head,int k){
 
  Node*temp = head;
  int len=0;
  while(temp!=nullptr){
    len++;
    temp=temp->next;
  }
  cout<<"len is : "<<len<<endl;

  int pos = len-k;
  temp = head;
  while(pos--){
   temp = temp->next;
  }
  return temp;
}

int main()
{
   Node* head = new Node(10);
    Node* second = new Node(20);
    Node* third = new Node(24);
    Node* fourth = new Node(50);
    Node* fifth = new Node(30);
    Node* sixth = new Node(17);
    Node* seventh = new Node(15);
    Node* eighth = new Node(24);
    Node* ninth = new Node(3);

  head->next = second;
  second->next = third;
  third->next = fourth;
  fourth->next =  fifth;
  fifth->next = sixth;
  sixth->next = seventh;
  seventh->next = eighth;
  eighth->next = ninth;
  ninth->next = nullptr;

// head = nullptr;
// head = sortcolors2(head);
print(head);
cout<<endl;
int k =3;
Node* kthNode = kthNodeFormEnd(head, k);
cout<<kthNode->data;



// reoder the list 
  // Node* middle = Getmiddle(head);
  // Node * first = head;
  // while (middle->next!=nullptr){
  //  Node* temp1 = middle->next;
  //  Node* temp2 = first->next;
  //  first->next = middle;
  //  middle->next = first;
  // }
  
  
}