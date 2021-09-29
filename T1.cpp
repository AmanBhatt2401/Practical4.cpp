#include <iostream>
using namespace std;
namespace first
 {
    int add(int a, int b){
       return a+b;
    }
 }
 namespace second{
    float add(float a, float b){
       return a+b;
    }
 }
 
int main(){
    cout<<first::add(10,20)<<endl;
    cout<<second::add(1.2,2.5);
    return 0;
}
