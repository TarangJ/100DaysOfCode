#include<iostream>
using namespace std;
int count(int arr[], int n, int x) {
    int ct=0;
    for(int i=0;i<n;i++){
        if(arr[i]==x){
           ct++;
        }
    }
    return ct;
}
int main(){
    int int n,s,dis;
    cout<<"Enter the size of array : ";
    cin>>n;
    n=sizeof(arr)/sizeo[0];
    int arr[n];
    cout<<"Enter the elements : ";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<"Enter the number you want to check its occurence : ";
    cin>>s;
    dis=count(arr,n,s);
    cout<<"Number of occurrence of " <<s<< " is :"<<dis;
	
    return 0;
}
