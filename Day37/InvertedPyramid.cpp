#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the number of rows you want : ";
    cin>>n;
    for(int i=1;i<=n;i++){
	    for(int j=n;j>=i;j--){
	        cout<<"*"<<" ";
	    }
        cout<<"\n";
    }            
    return 0;
}
