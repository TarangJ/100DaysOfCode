#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the number : \n";
    cin>>n;
    if(n<=0){
            cout<<"No the given number can not be expressed as  power of 2 \n";
        }
        else if(n & n-1){
            cout<<"No the given number can not be expressed as power of 2 \n";
        }
        else
            cout<<"Yes, the given number can be expressed as power of 2 \n";

    return 0;
}
