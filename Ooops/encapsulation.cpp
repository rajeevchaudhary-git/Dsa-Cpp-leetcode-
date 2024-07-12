#include<iostream>
using namespace std;
class Animal {
    public:
    int age;
    int name;
    void eating(){
        cout<<"eating";
    }
};

class Lion: public Animal{

};

int main(){
Lion obj;
obj.eating();
}