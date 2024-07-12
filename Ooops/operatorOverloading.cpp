#include<iostream>
using namespace std;
class  Params {
public:
int num1;

void operator+(Params&num2){
    int val = this->num1;
    int val2 = num2.num1;
    cout<<(val2-val)<<endl;
}
};
int main(){
Params obj,obj2;
obj.num1 = 10;
obj2.num1 = 11;

obj+obj2;
}