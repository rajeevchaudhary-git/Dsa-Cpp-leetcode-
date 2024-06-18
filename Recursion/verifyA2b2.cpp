#include<iostream>
#include<vector>
using namespace std;
bool getVerify(int & c){
    int sum=0;
    for(int i=1;i<c;i++){
        int temp = i*i;
        if(temp==c ){
            return temp;
        }
        else if(sum==c){
            return true;
        }
        else if(sum>c || temp >c){
            return false;
        }
        else{
            sum+=temp;
        }
    }
    return 0;
 
}
int main(){
int c = 2;
int i=0;
cout<<getVerify(c);

}