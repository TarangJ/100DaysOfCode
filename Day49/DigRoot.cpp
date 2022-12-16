#include<iostream>
using namespace std;
int digitalRoot(int n){
        if(n<=9)
            return n;
  
        return digitalRoot((n/10)+digitalRoot(n%10)); 
}
int main(){
  int num,dg;
  cout<<"Enter the number :";
  cin>>num;
  dg=digitalRoot(num);
  cout<<"Digital Root : "<<dg;
  
  return 0;
}
