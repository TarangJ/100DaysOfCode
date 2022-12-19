#include<iostream>
using namespace std;
int main(){
    int n,in,e,t;
    cout<<"Enter the size of array : ";
    cin>>n;
    n=sizeof(arr)/sizeo[0];
    int arr[n];
    cout<<"Enter the elements : ";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<"Enter the index value to insert : ";
    cin>>i;
    cout<<"Enter element you want to insert : ";
    cin>>e;
    t=insertAtIndex(arr,n,in,e);
    cout<<" "<<t;
    
    return 0;
}
void insertAtIndex(int arr[], int sizeOfArray, int index, int element){
        for(int i=sizeOfArray-1;i>index;i--)
            arr[i] =arr[i-1];
            
        arr[index] = element;
}
