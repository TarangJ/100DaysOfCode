#include<iostream>
using namespace std;
int main(){
    int a=10;
    int &b=a;                                                   //b initialize as refrence of a
    cout<<"value of a : "<<a<<"\n"<<"value of b : "<<b<<endl;
    b+=10;                                                      // whatever the change we make in refrence variable  
    cout<<"value of a : "<<a<<"\n"<<"value of b : "<<b<<endl;   // it will be effect on the main variable 
    a+=10;                                                      // both variable value will be change becaue the value are being
    cout<<"value of a : "<<a<<"\n"<<"value of b : "<<b<<endl;   // interchanged!!

    return 0;
}