#include <iostream>
using namespace std;

int main(){
    int arr[] = {1,3,5,8,6,5,6,7,8,6,7,};
    int n = sizeof(arr)/sizeof(arr[0]);

    cout<<"Stored array: ";
    
    for (int i=0;i<n;i++) 
 	   cout<<arr[i]<<" ";
    
    cout <<"Unique elements in the array: ";
    for (int i=0;i<n;i++){
        int j;
        for(j=0; j<i; j++)
           if(arr[i]==arr[j])
               break;
         if(i==j)
          cout<<arr[i]<<" ";
    }
    return 0; 
}