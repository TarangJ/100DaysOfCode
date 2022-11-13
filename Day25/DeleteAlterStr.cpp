#include<iostream>
using namespace std;
int main(){
    string S,str;
    cout<<"Enter the String : \n";
    cin>>S;
    for(int i=0;i<S.size();i+=2){
      str.push_back(S[i]);
    }
    cout<<str;

    return 0;
}
