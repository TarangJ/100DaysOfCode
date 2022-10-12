#include<iostream>
using namespace std;

class ArrInd{
    public:
    int findElementAtIndex(int arr[], int n, int key) {
    
        return a[key];
    }
};
int main(){
    int n,key;
    cin>>n;
    cin>>key;
    int arr[n];
    n=sizeof(arr)/sizeof(arr[0]);
    for(int i=0;i<n;i++)
        cin>>arr[i];

    cout<<findElementAtIndex(arr,n,key);

    return 0;
}