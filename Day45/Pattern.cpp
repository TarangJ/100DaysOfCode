#include<iostream>
using namespace std;
void printPat(int n){
    int temp=n;
    int m=n;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            for(int k=temp;k>0;k--){
                cout<<m<<" ";
            }
            m--;
        }
        cout<<"$";
        m=n;
        temp--;
    }
}
int main(){
    int n,res;
    cout<<"Enter the number of rows : ";
    cin>>n;
    res=printpat(n);
    cout<<res;
    
    return 0;
}
