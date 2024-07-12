#include<iostream>
#include<vector>
using namespace std;
class animal{
    private:
    string a=" ";
    public:
  animal(){
    cout<<"This is first Constructor"<<endl;
  }
 void set(string a ){
    this->a = a;
 }
 void display(){
    cout<<a;
 }


};
int main(){
// static object creation
// animal  obj;
// obj.set("lion");
// obj.display();

// dyanmic object creation

animal* obj = new animal;
(*obj).set("Bhalu");
(*obj).display();
}