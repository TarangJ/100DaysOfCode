#include<iostream>
#include<vector>
using namespace std;
vector<int> lstSmall(int vrr[] ,int n,int k){
    vector<int> ans;
    for(int i=0;i<n;i++){
        if(vrr[i]<k){
            ans.push_back(vrr[i]);
        }
    }
    return ans;
}
int main(){
    int n;
    cout<<"Enter the size of array : ";
    cin>>n;
    int arr[n];
    n=sizeof(arr)/sizeof(arr[0]);
    cout<<"Enter the elements : ";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int k;
    cout<<"Enter the number you want less than that : ";
    cin>>k;
    vector<int> ans=lstSmall(arr,n,k);
    for(auto x:ans){
        cout<<x<<" ";
    }

    return 0;

}