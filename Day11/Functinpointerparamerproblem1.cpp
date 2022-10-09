#include<iostream>
using namespace std;
void fun(string *s){
     cout<<*s;
}
int main(){
    string s="Claiming started";
    fun(&s);
    return 0;
}