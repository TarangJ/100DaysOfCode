#include<iostream>
using namespace std;
int main(){
    int n,k;
    cout<<"Enter the no of rows : \n";
    cin>>n;
    for(int i=0;i<=n;i++){
        for(int j=n;j>i;j-=2){
            cout<<" ";
        }
        for(int k=1;k<=i;k++){
            cout<<"*";
        }
        cout<<endl;
    }
    return 0;
}
