#include<iostream>
using namespace std;
int main(){
    int n,f;
    cout<<"Enter the number size of array : ";
    cin>>n;
    int arr[n];
    n=sizeof(arr)/sizeof(arr[0]);
    cout<<"Enter the number you want to find : ";
    cin>>f;
    cout<<"Enter the elements for the array : ";
    for(int i=0;i<n;i++){
        cin>>arr[i];

        if(arr[i]==f){
            cout<<"\n Element found at index : "<<i;
            break;
        }

        else{
            cout<<" \n Element not found at index "<<i;
        }
    }
    return 0;
}
