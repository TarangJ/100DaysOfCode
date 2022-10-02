#include<iostream>
using namespace std;
class Cdisntinct{
    public:
        int countDistinct(int arr[],int n){     //Input: {20,30,10,10}
            int res=1;                          //In this given array number of distinct element is 3 & 10 is given two times but
            for(int i=1;i<n;i++){               //count as same element ,20 & 30 is distinct by it self! */
                int j;
                for(j=0;j<i;j++)
                    if(arr[i]==arr[j])
                        break;

                    if(i==j)
                        res++;
            }
            return res;
        }
};
int main(){
    int n;
    int arr[]={20,30,10,10};
    n=sizeof(arr)/sizeof(arr[0]);
    Cdisntinct cd;
    cout<<"Number of distinct element int the array : "; 
    cout<<cd.countDistinct(arr,n);
    return 0;
}