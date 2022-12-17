#include<iostream>
using namespace std;
int main(){
       int n,cd;
       cout<<"Enter the nunmber : ";
       cin>>n;
       cd=countDigits(n);
       cout<<"Digits counts :" <<cd;
       
       return 0;
}
int countDigits(int n){
       if(n/10==0){
           return 1;
       }
       return 1+countDigits(n/10);
    }
