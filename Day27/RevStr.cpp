#include<iostream>
#include<string>
using namespace std;
int main(){
    string S,A;
    cout<<"Enter the string you want to reverse : \n";
    cin>>S;
    A=S;
    int i,n=S.size()-1;
    for(i=0;i<=n;i++){
        S[i]=A[n-i];
    }
    cout<<"Reversed string : \n"<<S;

    return 0;
}
