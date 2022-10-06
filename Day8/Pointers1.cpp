#include<iostream>
using namespace std;
int main(){
    int x=10;
    int *ptr=&x;
    cout<<*ptr<<"\n"; //pointer at refrence of x that is 10
    x=x+30;
    cout<<*ptr<<"\n"; //value of x is increased by 30 i.e;40
    *ptr=*ptr+40;
    cout<<x<<"\n"; //*ptr store the value of x ,x updated value of x is 80
    return 0;
}