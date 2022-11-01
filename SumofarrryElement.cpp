#include<iostream>
using namespace std;
int main(){
    int arr[]={20,10,10};
    int sum=0;
    int n=sizeof(arr)/sizeof(arr[0]);
    for(int i=0;i<n;i++){
            sum+=arr[i];
    }
    cout<<sum<<" ";

    return 0;
}
