#include<iostream>
using namespace std;
int main(){
    int n,pro=1;
    cout<<"Enter the size of the array : \n";
    cin>>n;
    int arr[n];
    n=sizeof(arr)/sizeof(arr[0]);
    cout<<"Enter the elements of the array : \n";
    for(int i=0;i<n;i++){
        cin>>arr[i];
        pro*=arr[i];
    }
    cout<<pro;

    return 0;
}
