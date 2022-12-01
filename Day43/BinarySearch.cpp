#include<iostream>
using namespace std;
int binSea(int arr[],int n,int k){
    int low=0,high=n-1;
    while(low<=high){
        int mid=low+(low+high)/2;

        if(arr[mid]==k)
            return mid;
        
        else if(arr[mid]>k)
            return high=mid-1;
            
        else
            return low=mid+1;
    }
    return -1;
}
int main(){
    int n,k;
    cout<<"Enter the size of the array : ";
    cin>>n;
    int arr[n];
    n=sizeof(arr)/sizeof(arr[0]);
    cout<<"Enter the elements : ";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<"Enter the number to be compared : ";
    cin>>k;
    int res=binSea(arr,n,k);
    cout<<res;

    return 0;
}