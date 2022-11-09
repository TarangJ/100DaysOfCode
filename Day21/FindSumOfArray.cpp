#include<iostream>
using namespace std;
int main(){
    int n,sum=0;
    cout<<"Enter the size of array"<<"\n";
    cin>>n;
    int arr[n];
    n=sizeof(arr)/sizeof(arr[0]);
    cout<<"Enter the elemnts of the array : "<<"\n";
    for(int i=0;i<n;i++){
        cin>>arr[i];
        sum+=arr[i];
    }
    cout<<sum;

    return 0;
}
