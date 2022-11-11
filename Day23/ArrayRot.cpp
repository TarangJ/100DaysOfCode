#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the size of elements : \n";
    cin>>n;
    cout<<"Enter the elements of the array: \n";
    int arr[n];
    n =sizeof(arr)/sizeof(arr[0]);
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
        for(int i=n-1;i>=0;i--){
            cout<<arr[i]<<" ";
        }

    return 0;
}
