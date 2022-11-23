#include<iostream>
using namespace std;
bool isPowerofTwo(long long n){
    if(n<=0){
        return false;
    }
    else if(n & n-1){
        return false;
    }
    else
        return true;
}

int main(){
    int n,ans;
    cout<<"Enter the number : ";
    cin>>n;
    ans=isPowerofTwo(n);
    if(ans==1){
        cout<<"Yes,the given number is power of 2 ";
    }
    if(ans==0){
        cout<<"No ,the given number is not power of 2 ";
    }

    return 0;
}
