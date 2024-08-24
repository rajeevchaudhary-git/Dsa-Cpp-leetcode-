#include<iostream>
#include<vector>
using namespace std;

class Node {
 public:
 int data;
 Node* next;
 Node(){
    this->data = 0;
    this->next = NULL;
 }

 Node(int data){
    this->data= data;
    this->next = nullptr;
 }
 ~Node(){};


};
void print(Node* &head){
    Node* temp = head;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp = temp->next;
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

Node* addtwo(Node* &l1,Node* &l2){
    l1 = Reverseloop(l1);
    l2 = Reverseloop(l2);

    // add both link list l1 and l2 
    Node* ansHead =NULL;
    Node* ansTail =NULL;
    int carry = 0;

   while(l1!=nullptr && l2!=nullptr){
     int sum = carry+l1->data + l2->data;
     int digit = sum%10;
     carry = sum/10;

     // new node creation
     Node* sumNode = new Node(digit);
     if(ansHead==NULL){
        ansHead = sumNode;
        ansTail = sumNode;
     }
     else{
        ansTail->next = sumNode;
        ansTail = sumNode;
     }
     l1 = l1->next;
     l2 = l2->next;
   }
   while(l1!=NULL){
    int sum = carry + l1->data;
    int digit = sum%10;
    carry=sum/10;

     Node* sumNode = new Node(digit);
     ansTail->next = sumNode;
     ansTail = sumNode; 
     l1 = l1->next;
   }

   while(l2!=NULL){
    int sum = carry + l2->data;
    int digit = sum%10;
    carry=sum/10;

     Node* sumNode = new Node(digit);
     ansTail->next = sumNode;
     ansTail = sumNode; 
     l2 = l2->next;
   }

   // carry handling kar rahe h idhar 
   while(carry!=0){
    int sum = carry;
    int digit = sum%10;
    carry = sum/10;

    Node* sumNode = new Node(digit);
     ansTail->next = sumNode;
     ansTail = sumNode; 
   }

   ansHead = Reverseloop(ansHead);
   return ansHead;


    
}

int main(){
  Node* head = new Node(2); 
  Node* second = new Node(1); 
  Node* third = new Node(1);

  head->next = second; 
  second->next = third;
  third->next =nullptr;

  Node* head2 = new Node(3);
  Node* fourth = new Node(3);
  Node* fifth = new Node(3);
 

  head2->next = fourth;
  fourth->next=fifth;
  fifth->next = nullptr;

//  cout<<"LL2 : ";
//  print(head2);
//   cout<<endl;
//  cout<<"LL1 : ";
//   print(head);

Node* newhead = addtwo(head,head2);
print(newhead);


}