#include<iostream>
using namespace std;
void fun(int *ptr){
    *ptr+=5;
}
int main(){
    int x=10;
    fun(&x);
    cout<<x;

    return 0;
}
