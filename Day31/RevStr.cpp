#include<iostream>
using namespace std;
int main(){
    int count=0;
    string str;
    cout<<"\n Enter the string : ";
    cin>>str;
    cout<<"Reversed string : ";
    for(int i=str.length()-1;i>=0;i--){
        cout<<str[i];
        count++;
    }
    cout<<endl;
    cout<<"No. of letters in string : "<<count;

    return 0;
}
