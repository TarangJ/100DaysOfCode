#include<iostream>
using namespace std;
int main(){
    int n,res;
    cout<<"Enter the number : ";
    cin>>n;
    res=evenlyDivides(n);
    cout<<res<<"/n";
    
    return 0;
}
int evenlyDivides(int N){
    int num=N,rem,op=0;
    while(num>0){
        rem=num%10;
        if(rem!=0 && N%(rem%10)==0){
            op++;
        }
        num/=10;
    }
    return op;
}
