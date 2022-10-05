#include<iostream>
using namespace std;
int main(){
    int x=10;
    cout<<&x<<"\n"; //address of x variable
    cout<<*(&x)<<"\n"; //gives the value at this address
    
    return 0;
}